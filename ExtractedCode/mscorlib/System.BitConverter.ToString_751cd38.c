// rea decompile_all
// name: System.BitConverter$$ToString
// address: 0x751cd38
// body: available
// range: 0x751cd38-0x751cf1b inclusive
// range: 0x751cf38-0x751d00f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x751cf18 to 0x75c7dec System.ThrowHelper$$ThrowArgumentNullException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x751cf8c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x751d00c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_BitConverter__ToString(long param_1,int param_2,uint param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_0952176b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917e7c8);
    FUN_03f5c2a4(&DAT_091da1b8);
    FUN_03f5c2a4(&DAT_091e6458);
    FUN_03f5c2a4(&DAT_0918e898);
    FUN_03f5c2a4(&DAT_091bee28);
    DAT_0952176b = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentNullException(0xf,0);
  }
  if (-1 < param_2) {
    iVar4 = *(int *)(param_1 + 0x18);
    if ((param_2 == 0) || (param_2 < iVar4)) {
      if ((int)param_3 < 0) goto LAB_0751cf38;
      goto LAB_0751cde0;
    }
  }
  System_ThrowHelper__ThrowArgumentOutOfRangeException(0xe,0x16,0);
  if ((int)param_3 < 0) {
LAB_0751cf38:
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar2 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_0921e638);
    uVar7 = thunk_FUN_03fc39d4(&DAT_09212cd0);
    System_ArgumentOutOfRangeException___ctor(uVar2,uVar3,uVar7);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091c3ea8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar2,uVar3);
  }
  iVar4 = *(int *)(param_1 + 0x18);
LAB_0751cde0:
  if ((int)(iVar4 - param_3) < param_2) {
    System_ThrowHelper__ThrowArgumentException(5,0xf,0);
  }
  if (param_3 == 0) {
    uVar2 = **(undefined8 **)(DAT_09535468 + 0xb8);
  }
  else {
    if (0x2aaaaaaa < param_3) {
      local_50 = CONCAT44(local_50._4_4_,0x2aaaaaaa);
      uVar2 = FUN_03f5c42c(DAT_09535420,&local_50);
      uVar3 = thunk_FUN_03fc39d4(&DAT_0920fed8);
      uVar2 = SR__Format(uVar3,uVar2,0);
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar3 = thunk_FUN_03f9944c();
      uVar7 = thunk_FUN_03fc39d4(&DAT_0921e638);
      System_ArgumentOutOfRangeException___ctor(uVar3,uVar7,uVar2);
      uVar2 = thunk_FUN_03fc39d4(&DAT_091c3ea8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar3,uVar2);
    }
    local_50 = 0;
    uStack_48 = 0;
    FUN_066eb114(&local_50,param_1,param_2,param_3,DAT_091bee28);
    if (*(int *)(DAT_0918e898 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = uStack_48;
    uVar2 = local_50;
    puVar5 = *(undefined8 **)(DAT_0918e898 + 0xb8);
    lVar6 = puVar5[1];
    if (lVar6 == 0) {
      if (*(int *)(DAT_0918e898 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar5 = *(undefined8 **)(DAT_0918e898 + 0xb8);
      }
      uVar7 = *puVar5;
      lVar6 = thunk_FUN_03f9944c(DAT_0917e7c8);
      FUN_061005d0(lVar6,uVar7,DAT_091e6458,0);
      plVar1 = (long *)(*(long *)(DAT_0918e898 + 0xb8) + 8);
      *plVar1 = lVar6;
      thunk_FUN_03f5d7b8(plVar1,lVar6);
    }
    uVar2 = FUN_04d641b0(param_3 * 3 + -1,uVar2,uVar3,lVar6,DAT_091da1b8);
  }
  return uVar2;
}

