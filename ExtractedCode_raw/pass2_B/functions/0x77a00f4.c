// rea decompile_all
// name: _GAME.SaveGame.SaveGameCodec$$Parse
// address: 0x77a00f4
// body: available
// range: 0x77a00f4-0x77a0403 inclusive
// range: 0x77a049c-0x77a04bb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77a04b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _GAME_SaveGame_SaveGameCodec__Parse(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  
  if ((DAT_09522e12 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09177760);
    FUN_03f5c2a4(&DAT_091d16e0);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_09187450);
    FUN_03f5c2a4(&DAT_09194158);
    FUN_03f5c2a4(&DAT_0918a590);
    FUN_03f5c2a4(&DAT_0918a5b0);
    FUN_03f5c2a4(&DAT_091ef7b0);
    FUN_03f5c2a4(&DAT_09194148);
    DAT_09522e12 = 1;
  }
  lVar5 = thunk_FUN_03f9944c(DAT_09194148);
  System_Object___ctor(lVar5,0);
  uVar6 = System_String__IsNullOrEmpty(param_1,0);
  if ((uVar6 & 1) != 0) {
    return 0;
  }
  if (lVar5 == 0) {
LAB_077a04b8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined2 *)(lVar5 + 0x10) = 0;
  *(undefined1 *)(lVar5 + 0x12) = 0;
  lVar7 = thunk_FUN_03f9944c(DAT_09187450);
  Newtonsoft_Json_JsonSerializerSettings___ctor(lVar7,0);
  if (*(int *)(DAT_0918a590 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (lVar7 == 0) goto LAB_077a04b8;
  *(undefined8 *)(lVar7 + 0xe0) = **(undefined8 **)(DAT_0918a590 + 0xb8);
  thunk_FUN_03f5d7b8();
  Newtonsoft_Json_JsonSerializerSettings__set_DateTimeZoneHandling(lVar7,1,0);
  Newtonsoft_Json_JsonSerializerSettings__set_MissingMemberHandling(lVar7,0,0);
  uVar8 = thunk_FUN_03f9944c(DAT_09177760);
  FUN_051f2bdc(uVar8,lVar5,DAT_091ef7b0,0);
  *(undefined8 *)(lVar7 + 0x108) = uVar8;
  thunk_FUN_03f5d7b8(lVar7 + 0x108,uVar8);
  if (*(int *)(DAT_09187300 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar7 = FUN_04bd16fc(param_1,lVar7,DAT_091d16e0);
  if (lVar7 == 0) {
    return 0;
  }
  if (*(long *)(lVar7 + 0x38) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = 1 < *(int *)(*(long *)(lVar7 + 0x38) + 0x10);
  }
  if (*(long *)(lVar7 + 0x40) == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = 1 < *(int *)(*(long *)(lVar7 + 0x40) + 0x10);
  }
  plVar9 = (long *)(lVar7 + 0x48);
  if (*plVar9 == 0) {
    bVar12 = false;
  }
  else {
    bVar12 = 1 < *(int *)(*plVar9 + 0x10);
  }
  if (*(char *)(lVar5 + 0x12) != '\0' || bVar12 != false) {
    *plVar9 = 0;
    thunk_FUN_03f5d7b8(plVar9,0);
  }
  plVar9 = (long *)(lVar7 + 0x30);
  if (*plVar9 == 0) {
    lVar10 = thunk_FUN_03f9944c(DAT_0918a5b0);
    System_Object___ctor(lVar10,0);
    *plVar9 = lVar10;
    thunk_FUN_03f5d7b8(plVar9,lVar10);
  }
  lVar10 = thunk_FUN_03f9944c(DAT_09194158);
  System_Object___ctor(lVar10,0);
  if (lVar10 == 0) goto LAB_077a04b8;
  *(long *)(lVar10 + 0x10) = lVar7;
  thunk_FUN_03f5d7b8((long *)(lVar10 + 0x10),lVar7);
  lVar11 = *(long *)(lVar7 + 0x38);
  bVar4 = false;
  if (lVar11 != 0) {
    bVar4 = bVar1;
    if (*(char *)(lVar5 + 0x10) != '\0') {
      bVar4 = true;
    }
    if ((bVar4) || (*(long *)(lVar11 + 0x28) == 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = *(long *)(lVar11 + 0x20) != 0;
    }
  }
  lVar11 = *(long *)(lVar7 + 0x40);
  *(bool *)(lVar10 + 0x18) = bVar4;
  if (lVar11 != 0) {
    bVar4 = bVar2;
    if (*(char *)(lVar5 + 0x11) != '\0') {
      bVar4 = true;
    }
    if (!bVar4) {
      bVar4 = *(long *)(lVar11 + 0x20) != 0;
      goto LAB_077a03e4;
    }
  }
  bVar4 = false;
LAB_077a03e4:
  iVar3 = *(int *)(lVar7 + 0x10);
  *(bool *)(lVar10 + 0x19) = bVar4;
  if (1 < iVar3) {
    bVar1 = true;
  }
  *(char *)(lVar10 + 0x1a) = bVar12 | bVar2 | bVar1;
  return lVar10;
}

