// rea decompile_all
// name: CookingGraph.Execution.CookingExecution$$Tick
// address: 0x449da1c
// body: available
// range: 0x449da1c-0x449ddd3 inclusive
// range: 0x449ddd8-0x449dddb inclusive
// range: 0x449dde0-0x449dde3 inclusive
// range: 0x449dde8-0x449ddeb inclusive
// range: 0x449de9c-0x449dec7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x449ddd0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449ddd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449dde0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449dde8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449dec4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_Execution_CookingExecution__Tick(double param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  long local_a0;
  undefined1 local_90 [16];
  
  if ((DAT_095181c0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a5078);
    FUN_03f5c2a4(&DAT_091a5080);
    FUN_03f5c2a4(&DAT_091a5088);
    FUN_03f5c2a4(&DAT_091b2428);
    FUN_03f5c2a4(&DAT_091b2440);
    FUN_03f5c2a4(&DAT_091b2448);
    FUN_03f5c2a4(&DAT_091b2420);
    FUN_03f5c2a4(&DAT_0917d238);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091b6d60);
    FUN_03f5c2a4(&DAT_091b6d68);
    FUN_03f5c2a4(&DAT_0921a4c0);
    DAT_095181c0 = 1;
  }
  local_90._8_8_ = 0;
  local_90._0_8_ = 0;
  local_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  CookingGraph_Execution_CookingExecution__RequireTime(param_1,DAT_0921a4c0);
  while( true ) {
    CookingGraph_Execution_CookingExecution__AdvanceDepartures(param_2);
    if (*(long *)(param_2 + 0x88) == 0) break;
    if ((*(char *)(*(long *)(param_2 + 0x88) + 0x13) != '\0') || ((param_3 & 1) != 0)) {
      CookingGraph_Execution_CookingExecution__CompleteReadyTransfers(param_2);
    }
    auVar11 = CookingGraph_Execution_CookingExecution__NextCompletionIn(param_2);
    dVar9 = param_1;
    local_90 = auVar11;
    if ((auVar11._0_8_ & 0xff) != 0) {
      uVar8 = FUN_05c2dd40(local_90,DAT_091b6d68);
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar9 = (double)System_Math__Min(param_1,uVar8,0);
    }
    uVar8 = DAT_0917d238;
    *(double *)(param_2 + 0x80) = dVar9 + *(double *)(param_2 + 0x80);
    lVar4 = thunk_FUN_03f9944c(uVar8);
    FUN_057e0400(lVar4,DAT_091b2420);
    if (*(long *)(param_2 + 0x48) == 0) break;
    FUN_057e185c(&local_c8,*(long *)(param_2 + 0x48),DAT_091b2440);
    local_b0 = local_c8;
    local_c8 = 0;
    puStack_a8 = puStack_c0;
    local_a0 = local_b8;
    puStack_c0 = &local_b0;
LAB_0449dc20:
    uVar5 = FUN_071bd28c(&local_b0,DAT_091a5080);
    lVar3 = local_a0;
    if ((uVar5 & 1) != 0) {
      if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      dVar10 = *(double *)(local_a0 + 0x28);
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar10 = (double)System_Math__Max(0,dVar10 - dVar9,0);
      *(double *)(lVar3 + 0x28) = dVar10;
      lVar2 = DAT_091b2428;
      if (dVar10 <= 1e-09) {
        if (lVar4 != 0) {
          lVar7 = *(long *)(lVar4 + 0x10);
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar7 != 0) {
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
              *plVar6 = lVar3;
              thunk_FUN_03f5d7b8(plVar6,lVar3);
            }
            else {
              FUN_057e0c68(lVar4,lVar3,
                           *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_0449dc20;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_0449dc20;
    }
    FUN_071bd288(&local_b0,DAT_091a5078);
    if (lVar4 == 0) break;
    FUN_057e185c(&local_c8,lVar4,DAT_091b2440);
    local_b0 = local_c8;
    local_c8 = 0;
    puStack_a8 = puStack_c0;
    local_a0 = local_b8;
    puStack_c0 = &local_b0;
    while( true ) {
      uVar5 = FUN_071bd28c(&local_b0,DAT_091a5080);
      if ((uVar5 & 1) == 0) break;
      if (*(long *)(param_2 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_057e2274(*(long *)(param_2 + 0x48),local_a0,DAT_091b2448);
    }
    FUN_071bd288(&local_b0,DAT_091a5078);
    FUN_057e185c(&local_c8,lVar4,DAT_091b2440);
    local_b0 = local_c8;
    local_c8 = 0;
    puStack_a8 = puStack_c0;
    local_a0 = local_b8;
    puStack_c0 = &local_b0;
    while( true ) {
      uVar5 = FUN_071bd28c(&local_b0,DAT_091a5080);
      if ((uVar5 & 1) == 0) break;
      if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uStack_d8 = *(undefined8 *)(local_a0 + 0x18);
      local_e0 = *(undefined8 *)(local_a0 + 0x10);
      local_d0 = *(undefined8 *)(local_a0 + 0x20);
      CookingGraph_Execution_CookingExecution__Fill(param_2,&local_e0);
    }
    FUN_071bd288(&local_b0,DAT_091a5078);
    CookingGraph_Execution_CookingExecution__AdvanceDepartures(param_2);
    if (*(long *)(param_2 + 0x88) == 0) break;
    if ((*(char *)(*(long *)(param_2 + 0x88) + 0x13) != '\0') || ((param_3 & 1) != 0)) {
      CookingGraph_Execution_CookingExecution__CompleteReadyTransfers(param_2);
    }
    param_1 = param_1 - dVar9;
    if (param_1 <= 1e-09) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

