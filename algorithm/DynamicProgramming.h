#pragma once

#include <vector>


// 예시 1. 피보나치 수를 찾는 문제
// 첫번 째 수가 0이고 , 두번 쨰 수가 1인 수열이 있습니다
// 세번 쨰 부터는 첫번 째수와 두번 째 수의 합으로 이루어진 수열을 피보나치 수열이라고 합니다
// n번째에 해당하는 숫자는 무엇이 될까요?

int Fibonacci(int n);


int Fibonacci_DP(int n);


// 예시 2. 계단의 층에는 각각 점수가 주어집니다
// 목표 층까지 도달할 때 가장 높은 점수로 계단을 밟고 지나가는 경우를 구하세요
// 가장 높은 점구다 무엇인가?
// 규칙1. 계단은 한번에 1개 또는 2번 씩만 오를 수 있습니다
// 규칙2. 연속해서 계단을 1개씩만 오를 수 없습니다
// 규칙3. 위 방식으로 최대의 값을 얻을 수 방식으로 계단을 오르세요

// 계단 0층 , {10, 20, 15, 25, 10, 20}

int max_stair_recursive(int i, std::vector<int> stairs);

int StairCount(std::vector<int> stairs);
