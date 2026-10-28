// rea decompile_all
// name: Cysharp.Threading.Tasks.PlayerLoopHelper$$InsertRunner
// address: 0x7d8d408
// body: available
// range: 0x7d8d408-0x7d8d6c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d8d6bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7d8d6c0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Cysharp_Threading_Tasks_PlayerLoopHelper__InsertRunner
               (undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09525d4d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6080);
    FUN_03f5c2a4(&DAT_091892e0);
    FUN_03f5c2a4(&DAT_091d5e08);
    FUN_03f5c2a4(&DAT_091803a0);
    FUN_03f5c2a4(&DAT_09193488);
    DAT_09525d4d = 1;
  }
  local_d0 = 0;
  uStack_e8 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  local_f0 = param_3;
  thunk_FUN_03f5d7b8(&local_f0,param_3);
  uVar2 = thunk_FUN_03f9944c(DAT_09193488);
  UnityEngine_LowLevel_PlayerLoopSystem_UpdateFunction___ctor(uVar2,param_4,DAT_091c6080,0);
  local_e0 = uVar2;
  thunk_FUN_03f5d7b8(&local_e0,uVar2);
  local_70 = local_d0;
  local_d0 = 0;
  uStack_88 = uStack_e8;
  local_90 = local_f0;
  uStack_78 = uStack_d8;
  uStack_80 = local_e0;
  uStack_e8 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  local_f0 = param_5;
  thunk_FUN_03f5d7b8(&local_f0,param_5);
  uVar2 = thunk_FUN_03f9944c(DAT_09193488);
  UnityEngine_LowLevel_PlayerLoopSystem_UpdateFunction___ctor(uVar2,param_6,DAT_091d5e08,0);
  local_e0 = uVar2;
  thunk_FUN_03f5d7b8(&local_e0,uVar2);
  local_a0 = local_d0;
  local_100 = param_1[4];
  uStack_b8 = uStack_e8;
  local_c0 = local_f0;
  uStack_a8 = uStack_d8;
  uStack_b0 = local_e0;
  uStack_118 = param_1[1];
  local_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  if (*(int *)(DAT_091892e0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = Cysharp_Threading_Tasks_PlayerLoopHelper__RemoveRunner(&local_120,param_3,param_5);
  if (lVar3 != 0) {
    lVar4 = FUN_03f5c394(DAT_091803a0,*(int *)(lVar3 + 0x18) + 2);
    uVar6 = 2;
    if ((param_2 & 1) == 0) {
      uVar6 = 0;
    }
    System_Array__Copy(lVar3,0,lVar4,uVar6,*(undefined4 *)(lVar3 + 0x18),0);
    if ((param_2 & 1) == 0) {
      if (lVar4 == 0) goto LAB_07d8d6bc;
      if ((*(ulong *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
        puVar5 = (undefined8 *)(lVar4 + 0x20 + (long)((int)*(ulong *)(lVar4 + 0x18) + -2) * 0x28);
        puVar5[1] = uStack_88;
        *puVar5 = local_90;
        puVar5[3] = uStack_78;
        puVar5[2] = uStack_80;
        puVar5[4] = local_70;
        thunk_FUN_03f5d7b8(puVar5,0);
        if (*(int *)(lVar4 + 0x18) != 0) {
          iVar1 = *(int *)(lVar4 + 0x18) + -1;
          lVar7 = lVar4 + (long)iVar1 * 0x28;
          lVar3 = lVar4 + 0x20 + (long)iVar1 * 0x28;
          *(undefined8 *)(lVar7 + 0x28) = uStack_b8;
          *(undefined8 *)(lVar7 + 0x20) = local_c0;
          *(undefined8 *)(lVar7 + 0x38) = uStack_a8;
          *(undefined8 *)(lVar7 + 0x30) = uStack_b0;
          *(undefined8 *)(lVar7 + 0x40) = local_a0;
          goto LAB_07d8d690;
        }
      }
    }
    else {
      if (lVar4 == 0) goto LAB_07d8d6bc;
      if (*(int *)(lVar4 + 0x18) != 0) {
        *(undefined8 *)(lVar4 + 0x28) = uStack_88;
        *(undefined8 *)(lVar4 + 0x20) = local_90;
        *(undefined8 *)(lVar4 + 0x38) = uStack_78;
        *(undefined8 *)(lVar4 + 0x30) = uStack_80;
        *(undefined8 *)(lVar4 + 0x40) = local_70;
        thunk_FUN_03f5d7b8(lVar4 + 0x20,0);
        if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
          lVar3 = lVar4 + 0x48;
          *(undefined8 *)(lVar4 + 0x50) = uStack_b8;
          *(undefined8 *)(lVar4 + 0x48) = local_c0;
          *(undefined8 *)(lVar4 + 0x60) = uStack_a8;
          *(undefined8 *)(lVar4 + 0x58) = uStack_b0;
          *(undefined8 *)(lVar4 + 0x68) = local_a0;
LAB_07d8d690:
          thunk_FUN_03f5d7b8(lVar3,0);
          return lVar4;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_07d8d6bc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

