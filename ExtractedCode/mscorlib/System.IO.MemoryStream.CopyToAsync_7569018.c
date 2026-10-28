// rea decompile_all
// name: System.IO.MemoryStream$$CopyToAsync
// address: 0x7569018
// body: available
// range: 0x7569018-0x75692cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7569118 to 0x757d7a4 System.IO.Stream$$CopyToAsync (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75692cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_IO_MemoryStream__CopyToAsync
          (long param_1,long *param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_38;
  
  local_38 = param_4;
  if ((DAT_095219fb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_091723b8);
    FUN_03f5c2a4(&DAT_09188030);
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_095219fb = 1;
  }
  System_IO_StreamHelpers__ValidateCopyToArgs(param_1,param_2,param_3);
  uVar4 = System_Object__GetType(param_1,0);
  uVar5 = DAT_091723b8;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
  uVar6 = System_Type__op_Inequality(uVar4,uVar5,0);
  if ((uVar6 & 1) != 0) {
    uVar5 = System_IO_Stream__CopyToAsync(param_1,param_2,param_3,param_4,0);
    return uVar5;
  }
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = System_Threading_CancellationToken__get_IsCancellationRequested(&local_38,0);
  uVar5 = local_38;
  if ((uVar6 & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0x34);
    uVar2 = *(int *)(param_1 + 0x38) - iVar1;
    System_IO_MemoryStream__EnsureNotClosed(param_1);
    uVar3 = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34);
    if ((int)uVar2 <= (int)uVar3) {
      uVar3 = uVar2;
    }
    uVar2 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
    *(uint *)(param_1 + 0x34) = uVar2 + *(int *)(param_1 + 0x34);
    if ((int)uVar3 < 1) {
      if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_095175b2 == '\0') {
        FUN_03f5c2a4(&DAT_0918b8c8);
        DAT_095175b2 = '\x01';
      }
      if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
    }
    else {
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *param_2;
      if ((*(byte *)(lVar7 + 0x130) < *(byte *)(DAT_09188030 + 0x130)) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(DAT_09188030 + 0x130) * 8 + -8) !=
          DAT_09188030)) {
        uVar5 = (**(code **)(lVar7 + 0x328))
                          (param_2,*(undefined8 *)(param_1 + 0x28),iVar1,uVar2,local_38,
                           *(undefined8 *)(lVar7 + 0x330));
        return uVar5;
      }
      (**(code **)(lVar7 + 0x398))
                (param_2,*(undefined8 *)(param_1 + 0x28),iVar1,uVar2,*(undefined8 *)(lVar7 + 0x3a0))
      ;
      if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_095175b2 == '\0') {
        FUN_03f5c2a4(&DAT_0918b8c8);
        DAT_095175b2 = '\x01';
      }
      if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
    }
    uVar5 = *(undefined8 *)(*(long *)(DAT_0918b8c8 + 0xb8) + 0x30);
  }
  else {
    if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_Threading_Tasks_Task__FromCanceled(uVar5,0);
  }
  return uVar5;
}

