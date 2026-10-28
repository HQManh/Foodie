// rea decompile_all
// name: _GAME.Team.TeamMemberModel$$DecodeProfileInfo
// address: 0x7781fdc
// body: available
// range: 0x7781fdc-0x77822f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77822ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77822f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77822f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _GAME_Team_TeamMemberModel__DecodeProfileInfo(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  if ((DAT_09522d17 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d948);
    FUN_03f5c2a4(&DAT_091764a0);
    FUN_03f5c2a4(&DAT_091d13a0);
    FUN_03f5c2a4(&DAT_09193748);
    FUN_03f5c2a4(&DAT_091896b8);
    FUN_03f5c2a4(&DAT_09225ed0);
    FUN_03f5c2a4(&DAT_0921d180);
    FUN_03f5c2a4(&DAT_09224620);
    FUN_03f5c2a4(&DAT_09222c40);
    DAT_09522d17 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09193748);
  _GAME_Profile_ProfileDbModel_PreviewModel___ctor(lVar1,0);
  if ((param_1 != 0) && (lVar1 != 0)) {
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + 0x10);
    thunk_FUN_03f5d7b8();
    *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x18));
    lVar6 = *(long *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = (undefined4)lVar6;
    if (lVar6 < -0x80000000) {
      uVar5 = 0x80000000;
    }
    if (0x7fffffff < lVar6) {
      uVar5 = 0x7fffffff;
    }
    *(undefined4 *)(lVar1 + 0x68) = uVar5;
    uVar3 = _GAME_Utils_HelperString__IsNullOrEmpty(uVar2,0);
    if ((uVar3 & 1) == 0) {
      if ((*(long *)(param_1 + 0x38) == 0) ||
         (lVar6 = System_String__TrimStart(*(long *)(param_1 + 0x38),0), lVar6 == 0))
      goto LAB_077822ec;
      uVar3 = System_String__StartsWith(lVar6,DAT_09225ed0,0);
      if ((uVar3 & 1) != 0) {
        lVar6 = Newtonsoft_Json_Linq_JObject__Parse(*(undefined8 *)(param_1 + 0x38),0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = Newtonsoft_Json_Linq_JObject__get_Item(lVar6,DAT_0921d180,0);
        if (((lVar4 == 0) ||
            (lVar4 = Newtonsoft_Json_Linq_JObject__get_Item(lVar6,DAT_09222c40,0), lVar4 != 0)) ||
           (lVar4 = Newtonsoft_Json_Linq_JObject__get_Item(lVar6,DAT_09224620,0), lVar4 != 0)) {
          uVar2 = thunk_FUN_03f9944c(DAT_091896b8);
          _GAME_Profile_ProfileDbModel___ctor(uVar2,lVar1,0);
          return uVar2;
        }
        lVar6 = FUN_04bd09d0(lVar6,DAT_091d13a0);
        if ((lVar6 != 0) &&
           (uVar3 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(lVar6 + 0x10),0),
           (uVar3 & 1) == 0)) {
          if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar3 = System_String__Equals(*(long *)(lVar6 + 0x10),*(undefined8 *)(param_1 + 0x10),0);
          if ((uVar3 & 1) != 0) {
            puVar8 = (undefined8 *)(lVar6 + 0x18);
            uVar3 = _GAME_Utils_HelperString__IsNullOrEmpty(*puVar8,0);
            if ((uVar3 & 1) != 0) {
              *puVar8 = *(undefined8 *)(param_1 + 0x18);
              thunk_FUN_03f5d7b8(puVar8);
            }
            plVar7 = (long *)(lVar6 + 0x90);
            if (*plVar7 == 0) {
              lVar1 = thunk_FUN_03f9944c(DAT_091764a0);
              FUN_06ee539c(lVar1,DAT_0919d948);
              *plVar7 = lVar1;
              thunk_FUN_03f5d7b8(plVar7,lVar1);
            }
            plVar7 = (long *)(lVar6 + 0x98);
            if (*plVar7 == 0) {
              lVar1 = thunk_FUN_03f9944c(DAT_091764a0);
              FUN_06ee539c(lVar1,DAT_0919d948);
              *plVar7 = lVar1;
              thunk_FUN_03f5d7b8(plVar7,lVar1);
            }
            uVar2 = thunk_FUN_03f9944c(DAT_091896b8);
            _GAME_Profile_ProfileDbModel___ctor(uVar2,lVar6,0);
            return uVar2;
          }
        }
        uVar2 = thunk_FUN_03f9944c(DAT_091896b8);
        _GAME_Profile_ProfileDbModel___ctor(uVar2,lVar1,0);
        return uVar2;
      }
    }
    uVar2 = thunk_FUN_03f9944c(DAT_091896b8);
    _GAME_Profile_ProfileDbModel___ctor(uVar2,lVar1,0);
    return uVar2;
  }
LAB_077822ec:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

