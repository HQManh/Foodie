// rea decompile_all
// name: _GAME.Profile.ProfileServer.<PushProfileByServerId>d__2$$MoveNext
// address: 0x77b847c
// body: available
// range: 0x77b847c-0x77b893b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77b892c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b8930 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b8934 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b8938 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_ProfileServer_<PushProfileByServerId>d__2__MoveNext(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined2 uVar4;
  bool bVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int *piVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  
  if ((DAT_09522ec4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_091997d8);
    FUN_03f5c2a4(&DAT_09199a20);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_091d1640);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_09193748);
    FUN_03f5c2a4(&DAT_0918dea0);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_0918cfb8);
    DAT_09522ec4 = 1;
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  if (*param_1 == 0) {
    local_70 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
LAB_077b8738:
    uVar15 = local_70._0_8_;
    if ((long *)local_70._0_8_ == (long *)0x0) {
      if (local_70[8] != '\0') goto LAB_077b87ec;
    }
    else {
      uVar4 = local_70._10_2_;
      lVar13 = *(long *)(DAT_0919a580 + 0x20);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03f95a6c();
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03f95a6c(lVar13);
      }
      lVar8 = *(long *)uVar15;
      uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar13) {
            puVar11 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_077b87d8;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar7 != 0);
      }
      puVar11 = (undefined8 *)FUN_03f95da8(uVar15,lVar13,0);
LAB_077b87d8:
      uVar7 = (*(code *)*puVar11)(uVar15,uVar4,puVar11[1]);
      if ((uVar7 & 1) != 0) {
LAB_077b87ec:
        lVar13 = *(long *)(param_1 + 0xc);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(lVar13 + 0x30) == 200) {
          uVar7 = _GAME_Profile_ProfileServer__HasWireStatus(*(undefined8 *)(lVar13 + 0x40));
          if ((uVar7 & 1) != 0) {
            if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar15 = *(undefined8 *)(*(long *)(param_1 + 0xc) + 0x40);
            if (*(int *)(DAT_09187300 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar13 = FUN_04bd15a4(uVar15,DAT_091d1640);
            if (lVar13 != 0) {
              bVar5 = *(int *)(lVar13 + 0x10) == 0;
              goto LAB_077b885c;
            }
          }
        }
      }
    }
  }
  else {
    uVar7 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(param_1 + 8),0);
    auVar3._8_8_ = local_70._8_8_;
    auVar3._0_8_ = local_70._0_8_;
    auVar18._8_8_ = local_60._8_8_;
    auVar18._0_8_ = local_60._0_8_;
    if (((uVar7 & 1) == 0) &&
       (lVar13 = *(long *)(param_1 + 10), local_60 = auVar18, local_70 = auVar3, lVar13 != 0)) {
      lVar8 = thunk_FUN_03f9944c(DAT_09193748);
      _GAME_Profile_ProfileDbModel_PreviewModel___ctor(lVar8,lVar13);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(param_1 + 8);
      thunk_FUN_03f5d7b8();
      if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = _GAME_BaseGame_ABIServerAPI__get_ProjectProfileId(0);
      lVar13 = *(long *)(param_1 + 10);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar15 = *(undefined8 *)(param_1 + 8);
      uVar16 = *(undefined8 *)(lVar13 + 0x18);
      uVar17 = *(undefined8 *)(lVar13 + 0x48);
      uVar1 = *(undefined4 *)(lVar13 + 0x20);
      uVar2 = *(undefined4 *)(lVar13 + 0x7c);
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar9 = Newtonsoft_Json_JsonConvert__SerializeObject(lVar8,0);
      uVar10 = thunk_FUN_03f9944c(DAT_0918dea0);
      _GAME_Profile_ABIServerPushProfileModel_RequestModel___ctor
                (uVar10,uVar6,uVar15,uVar16,uVar17,uVar1,uVar2,uVar9);
      uVar15 = _GAME_BaseGame_ABIServerAPI__get_UrlSvProfile(0);
      uVar16 = Newtonsoft_Json_JsonConvert__SerializeObject(uVar10,0);
      uVar17 = thunk_FUN_03f9944c(DAT_0918cfb8);
      _GAME_BaseGame_WebRequestModel___ctor(uVar17,uVar15,1,10,uVar16,0);
      piVar12 = param_1 + 0xc;
      *(undefined8 *)piVar12 = uVar17;
      thunk_FUN_03f5d7b8(piVar12,uVar17);
      auVar18 = _GAME_BaseGame_ABIServerAPI__SendWebRequest(*(undefined8 *)piVar12,0,0,0);
      local_60._0_8_ = 0;
      local_60._8_8_ = 0;
      if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      local_60 = auVar18;
      thunk_FUN_03f5d7b8(local_60,0);
      local_70 = local_60;
      uVar7 = FUN_0430cf0c(local_70,DAT_0919a588);
      if ((uVar7 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0xe) = local_70;
        thunk_FUN_03f5d7b8(param_1 + 0xe,0);
        FUN_0478e84c(param_1 + 2,local_70,param_1,DAT_091997d8);
        return;
      }
      goto LAB_077b8738;
    }
  }
  bVar5 = false;
LAB_077b885c:
  plVar14 = *(long **)(param_1 + 2);
  *param_1 = -2;
  if (plVar14 == (long *)0x0) {
    *(bool *)(param_1 + 6) = bVar5;
  }
  else {
    lVar13 = *(long *)(DAT_09199a20 + 0x20);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_03f95a6c();
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_03f95a6c(lVar13);
    }
    lVar8 = *plVar14;
    uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar7 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar13) {
          puVar11 = (undefined8 *)(lVar8 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_077b8900;
        }
        uVar7 = uVar7 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar7 != 0);
    }
    puVar11 = (undefined8 *)FUN_03f95da8(plVar14,lVar13,2);
LAB_077b8900:
    (*(code *)*puVar11)(plVar14,bVar5,puVar11[1]);
  }
  return;
}

