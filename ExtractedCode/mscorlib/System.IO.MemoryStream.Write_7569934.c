// rea decompile_all
// name: System.IO.MemoryStream$$Write
// address: 0x7569934
// body: available
// range: 0x7569934-0x7569b47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7569a10 to 0x75772d8 System.IO.Stream$$Write (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7569aac to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7569acc to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7569b44 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_MemoryStream__Write(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  undefined8 local_40;
  ulong uStack_38;
  
  local_40 = param_2;
  uStack_38 = param_3;
  if ((DAT_095219fd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091723b8);
    FUN_03f5c2a4(&DAT_091b9760);
    FUN_03f5c2a4(&DAT_091b9798);
    FUN_03f5c2a4(&DAT_091ba8f0);
    DAT_095219fd = 1;
  }
  uVar2 = System_Object__GetType(param_1,0);
  uVar3 = DAT_091723b8;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
  uVar4 = System_Type__op_Inequality(uVar2,uVar3,0);
  if ((uVar4 & 1) != 0) {
    System_IO_Stream__Write(param_1,param_2,param_3,0);
    return;
  }
  System_IO_MemoryStream__EnsureNotClosed(param_1);
  System_IO_MemoryStream__EnsureWriteable(param_1);
  uVar8 = *(uint *)(param_1 + 0x34);
  uVar5 = (uint)param_3;
  iVar1 = uVar8 + uVar5;
  if (iVar1 < 0) {
    thunk_FUN_03fc39d4(&DAT_09186188);
    uVar3 = thunk_FUN_03f9944c();
    uVar2 = thunk_FUN_03fc39d4(&DAT_0920dbf0);
    System_IO_IOException___ctor(uVar3,uVar2);
    uVar2 = thunk_FUN_03fc39d4(&DAT_091d30c8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar2);
  }
  iVar6 = *(int *)(param_1 + 0x38);
  if (iVar1 <= iVar6) goto LAB_07569a8c;
  if (*(int *)(param_1 + 0x3c) < iVar1) {
    uVar4 = System_IO_MemoryStream__EnsureCapacity(param_1,iVar1);
    if ((iVar6 < (int)uVar8) && ((uVar4 & 1) == 0)) {
      iVar6 = *(int *)(param_1 + 0x38);
LAB_07569a70:
      System_Array__Clear(*(undefined8 *)(param_1 + 0x28),iVar6,iVar1 - iVar6,0);
    }
  }
  else if (iVar6 < (int)uVar8) goto LAB_07569a70;
  uVar8 = *(uint *)(param_1 + 0x34);
  *(int *)(param_1 + 0x38) = iVar1;
LAB_07569a8c:
  lVar7 = *(long *)(param_1 + 0x28);
  if (lVar7 == 0) {
    if (uVar8 != 0 || uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    lVar7 = 0;
    param_3 = 0;
  }
  else {
    if ((*(uint *)(lVar7 + 0x18) < uVar8) || (*(uint *)(lVar7 + 0x18) - uVar8 < uVar5)) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    param_3 = param_3 & 0xffffffff;
    lVar7 = lVar7 + (int)uVar8 + 0x20;
  }
  FUN_05ff5c28(&local_40,lVar7,param_3,DAT_091b9760);
  *(int *)(param_1 + 0x34) = iVar1;
  return;
}

