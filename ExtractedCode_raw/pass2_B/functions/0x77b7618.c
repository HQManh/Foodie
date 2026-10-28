// rea decompile_all
// name: _GAME.Profile.ProfileDbModel.SaveGameModel$$.ctor
// address: 0x77b7618
// body: available
// range: 0x77b7618-0x77b7903 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77b7900 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_ProfileDbModel_SaveGameModel___ctor(long param_1,long param_2)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if ((DAT_09522eb7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_0919d948);
    FUN_03f5c2a4(&DAT_091764a0);
    FUN_03f5c2a4(&DAT_091ce850);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917cce8);
    DAT_09522eb7 = 1;
  }
  uVar4 = thunk_FUN_03f9944c(DAT_0917c520);
  FUN_05796918(uVar4,DAT_091adc70);
  puVar7 = (undefined8 *)(param_1 + 0x40);
  *puVar7 = uVar4;
  thunk_FUN_03f5d7b8(puVar7,uVar4);
  uVar4 = thunk_FUN_03f9944c(DAT_0917c520);
  FUN_05796918(uVar4,DAT_091adc70);
  puVar9 = (undefined8 *)(param_1 + 0x48);
  *puVar9 = uVar4;
  thunk_FUN_03f5d7b8(puVar9,uVar4);
  uVar4 = thunk_FUN_03f9944c(DAT_091764a0);
  FUN_06ee539c(uVar4,DAT_0919d948);
  puVar5 = (undefined8 *)(param_1 + 0xa8);
  *puVar5 = uVar4;
  thunk_FUN_03f5d7b8(puVar5,uVar4);
  uVar4 = thunk_FUN_03f9944c(DAT_091764a0);
  FUN_06ee539c(uVar4,DAT_0919d948);
  puVar6 = (undefined8 *)(param_1 + 0xb0);
  *puVar6 = uVar4;
  thunk_FUN_03f5d7b8(puVar6,uVar4);
  uVar4 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0400(uVar4,DAT_091b0558);
  puVar8 = (undefined8 *)(param_1 + 200);
  *puVar8 = uVar4;
  thunk_FUN_03f5d7b8(puVar8,uVar4);
  System_Object___ctor(param_1,0);
  if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar3 = UnityEngine_Application__get_platform(0);
  *(uint *)(param_1 + 0x10) = (uint)(iVar3 != 0xb);
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x10);
    thunk_FUN_03f5d7b8();
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x18);
    thunk_FUN_03f5d7b8();
    uVar10 = *(undefined8 *)(param_2 + 0x20);
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar10;
    uVar1 = *(undefined4 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x40) = uVar4;
    *(undefined4 *)(param_1 + 0x38) = uVar1;
    thunk_FUN_03f5d7b8(puVar7);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x40);
    thunk_FUN_03f5d7b8(puVar9);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x48);
    thunk_FUN_03f5d7b8();
    uVar1 = *(undefined4 *)(param_2 + 0x58);
    uVar4 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x50);
    *(undefined4 *)(param_1 + 0x60) = uVar1;
    *(undefined8 *)(param_1 + 0x68) = uVar4;
    thunk_FUN_03f5d7b8();
    uVar10 = *(undefined8 *)(param_2 + 0x78);
    uVar13 = *(undefined8 *)(param_2 + 0x70);
    uVar12 = *(undefined8 *)(param_2 + 0x68);
    uVar4 = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = uVar10;
    uVar11 = *(undefined8 *)(param_2 + 0x90);
    uVar10 = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x78) = uVar13;
    *(undefined8 *)(param_1 + 0x70) = uVar12;
    *(undefined8 *)(param_1 + 0xa8) = uVar4;
    *(undefined8 *)(param_1 + 0x98) = uVar11;
    *(undefined8 *)(param_1 + 0x90) = uVar10;
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0x98);
    thunk_FUN_03f5d7b8(puVar5);
    uVar4 = FUN_04ba4478(*(undefined8 *)(param_2 + 0xa8),DAT_091ce850);
    *(undefined8 *)(param_1 + 0xb0) = uVar4;
    thunk_FUN_03f5d7b8(puVar6,uVar4);
    bVar2 = *(byte *)(param_2 + 0xc0);
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xb0);
    *(uint *)(param_1 + 0xb8) = (uint)bVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xc0));
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 0xb8);
    thunk_FUN_03f5d7b8(puVar8);
    *(uint *)(param_1 + 0xd0) = (uint)*(byte *)(param_2 + 0xc2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

