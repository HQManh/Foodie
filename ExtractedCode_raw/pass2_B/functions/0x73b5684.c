// rea decompile_all
// name: FUN_073b5684
// address: 0x73b5684
// body: available
// range: 0x73b5684-0x73b57f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73b5768 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b578c to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b57f4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_073b5684(undefined8 *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (DAT_09520c0a == '\0') {
    FUN_03f5c2a4(&DAT_091971b0);
    FUN_03f5c2a4(&DAT_091d2ea8);
    DAT_09520c0a = '\x01';
  }
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_092222d0);
    System_ArgumentNullException___ctor(uVar3,uVar4,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091c4238);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar4);
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = param_2;
  *param_1 = 0;
  local_40 = 0;
  uStack_38 = 0;
  FUN_050c5f34(&local_40,param_3,DAT_091971b0);
  lVar2 = DAT_091d2ea8;
  param_1[4] = uStack_38;
  param_1[3] = local_40;
  lVar6 = param_1[3];
  uVar1 = param_1[4];
  lVar5 = *(long *)(lVar2 + 0x38);
  if (lVar5 == 0) {
    FUN_03f95ac8(lVar2);
    lVar5 = *(long *)(lVar2 + 0x38);
  }
  lVar2 = *(long *)(lVar5 + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  uVar8 = uVar1 >> 0x20;
  uVar9 = (uint)uVar1;
  uVar7 = (uint)(uVar1 >> 0x20);
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (lVar6 == 0) {
    if (uVar7 != 0 || uVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    uVar8 = 0;
    lVar6 = 0;
  }
  else {
    if ((*(uint *)(lVar6 + 0x18) < uVar9) || (*(uint *)(lVar6 + 0x18) - uVar9 < uVar7)) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    lVar6 = lVar6 + (int)uVar9 + 0x20;
  }
  param_1[1] = lVar6;
  param_1[2] = uVar8;
  return;
}

