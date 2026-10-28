// rea decompile_all
// name: _GAME.Profile.ProfileDbModel.PreviewModel$$ParseServerInfoEnvelope
// address: 0x77b6e00
// body: available
// range: 0x77b6e00-0x77b7183 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77b7180 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_ProfileDbModel_PreviewModel__ParseServerInfoEnvelope
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((DAT_09522eb4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d948);
    FUN_03f5c2a4(&DAT_091764a0);
    FUN_03f5c2a4(&DAT_091cc080);
    FUN_03f5c2a4(&DAT_091d13a0);
    FUN_03f5c2a4(&DAT_091896b8);
    FUN_03f5c2a4(&DAT_0921e938);
    FUN_03f5c2a4(&DAT_0920a1b0);
    FUN_03f5c2a4(&DAT_0920a188);
    FUN_03f5c2a4(&DAT_0920a1c0);
    FUN_03f5c2a4(&DAT_0921d180);
    FUN_03f5c2a4(&DAT_0920a180);
    DAT_09522eb4 = 1;
  }
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uVar2 = _GAME_Profile_ProfileDbModel_PreviewModel__CreateWireFallback
                    (param_3,param_4,param_5,param_6,param_7);
  uVar3 = thunk_FUN_03f9944c(DAT_091896b8);
  _GAME_Profile_ProfileDbModel___ctor(uVar3,uVar2);
  uVar4 = _GAME_Utils_HelperString__IsNullOrEmpty(param_2,0);
  if ((uVar4 & 1) == 0) {
    lVar5 = Newtonsoft_Json_Linq_JObject__Parse(param_2,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = FUN_04bd09d0(lVar5,DAT_091d13a0);
    if (lVar6 != 0) {
      lVar7 = Newtonsoft_Json_Linq_JObject__get_Item(lVar5,DAT_0921d180,0);
      uVar2 = 0;
      if (lVar7 != 0) {
        uVar2 = FUN_04b28c50(lVar7,DAT_091cc080);
      }
      uVar4 = _GAME_Utils_HelperString__IsNullOrEmpty(uVar2,0);
      if (((uVar4 & 1) == 0) &&
         (plVar8 = (long *)Newtonsoft_Json_Linq_JObject__get_Item(lVar5,DAT_0921e938,0),
         plVar8 != (long *)0x0)) {
        iVar1 = (**(code **)(*plVar8 + 0x228))(plVar8,*(undefined8 *)(*plVar8 + 0x230));
        if (iVar1 == 6) {
          puVar10 = (undefined8 *)(lVar6 + 0x10);
          uVar4 = _GAME_Utils_HelperString__IsNullOrEmpty(*puVar10,0);
          if ((((uVar4 & 1) != 0) ||
              (uVar4 = _GAME_Utils_HelperString__IsNullOrEmpty(param_3,0), (uVar4 & 1) != 0)) ||
             (uVar4 = System_String__Equals(*puVar10,param_3,4,0), (uVar4 & 1) != 0)) {
            uVar4 = _GAME_Utils_HelperString__IsNullOrEmpty(*puVar10,0);
            if ((uVar4 & 1) != 0) {
              *puVar10 = param_3;
              thunk_FUN_03f5d7b8(puVar10,param_3);
            }
            puVar10 = (undefined8 *)(lVar6 + 0x18);
            uVar4 = _GAME_Utils_HelperString__IsNullOrEmpty(*puVar10,0);
            if ((uVar4 & 1) != 0) {
              *puVar10 = param_4;
              thunk_FUN_03f5d7b8(puVar10,param_4);
            }
            plVar8 = (long *)(lVar6 + 0x90);
            if (*plVar8 == 0) {
              lVar5 = thunk_FUN_03f9944c(DAT_091764a0);
              FUN_06ee539c(lVar5,DAT_0919d948);
              *plVar8 = lVar5;
              thunk_FUN_03f5d7b8(plVar8,lVar5);
            }
            plVar8 = (long *)(lVar6 + 0x98);
            if (*plVar8 == 0) {
              lVar5 = thunk_FUN_03f9944c(DAT_091764a0);
              FUN_06ee539c(lVar5,DAT_0919d948);
              *plVar8 = lVar5;
              thunk_FUN_03f5d7b8(plVar8,lVar5);
            }
            uVar2 = thunk_FUN_03f9944c(DAT_091896b8);
            _GAME_Profile_ProfileDbModel___ctor(uVar2,lVar6);
            _GAME_Profile_ProfileReadEnvelope__Authoritative(&local_a0,uVar2,param_8);
            goto LAB_077b7148;
          }
          puVar10 = &DAT_0920a180;
          goto LAB_077b712c;
        }
      }
      puVar10 = &DAT_0920a1c0;
      goto LAB_077b7108;
    }
    puVar10 = &DAT_0920a1b0;
LAB_077b712c:
    uVar9 = *puVar10;
    uVar2 = 4;
  }
  else {
    puVar10 = &DAT_0920a188;
LAB_077b7108:
    uVar9 = *puVar10;
    uVar2 = 3;
  }
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  _GAME_Profile_ProfileReadEnvelope___ctor(&local_a0,uVar3,uVar2,param_8,uVar9);
LAB_077b7148:
  param_1[1] = uStack_98;
  *param_1 = local_a0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  return;
}

