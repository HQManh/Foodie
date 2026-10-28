// rea decompile_all
// name: Cysharp.Threading.Tasks.PlayerLoopHelper$$InsertLoop
// address: 0x7d8e9c4
// body: available
// range: 0x7d8e9c4-0x7d8ec2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d8ec24 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7d8ec28 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7d8ec2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_PlayerLoopHelper__InsertLoop
               (long param_1,uint param_2,undefined8 param_3,uint param_4,uint param_5,uint param_6,
               undefined8 param_7,undefined8 param_8,undefined4 param_9)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  
  if ((DAT_09525d51 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b48);
    FUN_03f5c2a4(&DAT_091892e0);
    FUN_03f5c2a4(&DAT_091892e8);
    DAT_09525d51 = 1;
  }
  if (*(int *)(DAT_091892e0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = Cysharp_Threading_Tasks_PlayerLoopHelper__FindLoopSystemIndex(param_1,param_3);
  if ((param_4 & (param_2 ^ 0xffffffff)) == 0) {
    if (param_1 == 0) {
LAB_07d8ec2c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(uint *)(param_1 + 0x18) <= uVar2) goto LAB_07d8ec28;
    lVar6 = param_1 + (long)(int)uVar2 * 0x28;
    uStack_88 = *(undefined8 *)(lVar6 + 0x28);
    local_90 = *(undefined8 *)(lVar6 + 0x20);
    uStack_78 = *(undefined8 *)(lVar6 + 0x38);
    uStack_80 = *(undefined8 *)(lVar6 + 0x30);
    local_70 = *(undefined8 *)(lVar6 + 0x40);
    if (*(int *)(DAT_091892e0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = *(long *)(*(long *)(DAT_091892e0 + 0xb8) + 0x28);
    uVar3 = thunk_FUN_03f9944c(DAT_09182b48);
    Cysharp_Threading_Tasks_Internal_ContinuationQueue___ctor(uVar3,param_9,0);
    if (lVar6 == 0) goto LAB_07d8ec2c;
    if (*(uint *)(lVar6 + 0x18) <= param_5) goto LAB_07d8ec28;
    puVar4 = (undefined8 *)(lVar6 + (long)(int)param_5 * 8 + 0x20);
    *puVar4 = uVar3;
    thunk_FUN_03f5d7b8(puVar4,uVar3);
    lVar6 = *(long *)(*(long *)(DAT_091892e0 + 0xb8) + 0x30);
    uVar5 = thunk_FUN_03f9944c(DAT_091892e8);
    Cysharp_Threading_Tasks_Internal_PlayerLoopRunner___ctor(uVar5,param_9,0);
    if (lVar6 == 0) goto LAB_07d8ec2c;
    if (*(uint *)(lVar6 + 0x18) <= param_5) goto LAB_07d8ec28;
    puVar4 = (undefined8 *)(lVar6 + (long)(int)param_5 * 8 + 0x20);
    *puVar4 = uVar5;
    thunk_FUN_03f5d7b8(puVar4,uVar5);
    local_a0 = local_70;
    uStack_b8 = uStack_88;
    local_c0 = local_90;
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    uVar3 = Cysharp_Threading_Tasks_PlayerLoopHelper__InsertRunner
                      (&local_c0,param_6 & 1,param_7,uVar3,param_8,uVar5);
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  else {
    if (param_1 == 0) goto LAB_07d8ec2c;
    if (*(uint *)(param_1 + 0x18) <= uVar2) goto LAB_07d8ec28;
    lVar6 = param_1 + (long)(int)uVar2 * 0x28;
    uStack_e8 = *(undefined8 *)(lVar6 + 0x28);
    local_f0 = *(undefined8 *)(lVar6 + 0x20);
    uStack_d8 = *(undefined8 *)(lVar6 + 0x38);
    uStack_e0 = *(undefined8 *)(lVar6 + 0x30);
    local_d0 = *(undefined8 *)(lVar6 + 0x40);
    if (*(int *)(DAT_091892e0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = Cysharp_Threading_Tasks_PlayerLoopHelper__RemoveRunner(&local_f0,param_7,param_8);
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  if (uVar2 < uVar1) {
    *(undefined8 *)(param_1 + (long)(int)uVar2 * 0x28 + 0x28) = uVar3;
    thunk_FUN_03f5d7b8();
    return;
  }
LAB_07d8ec28:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

