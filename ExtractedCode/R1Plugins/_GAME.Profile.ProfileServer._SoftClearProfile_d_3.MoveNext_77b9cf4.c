// rea decompile_all
// name: _GAME.Profile.ProfileServer.<SoftClearProfile>d__3$$MoveNext
// address: 0x77b9cf4
// body: available
// range: 0x77b9cf4-0x77ba25b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77ba24c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ba250 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ba254 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77ba258 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_ProfileServer_<SoftClearProfile>d__3__MoveNext(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  bool bVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_09522ecc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_091997e0);
    FUN_03f5c2a4(&DAT_09199a20);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_091d1640);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_09193748);
    FUN_03f5c2a4(&DAT_0918dea0);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_0918cfb8);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09522ecc = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
LAB_077ba060:
    uVar13 = local_50._0_8_;
    if ((long *)local_50._0_8_ == (long *)0x0) {
      if (local_50[8] != '\0') goto LAB_077ba114;
    }
    else {
      uVar2 = local_50._10_2_;
      lVar11 = *(long *)(DAT_0919a580 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03f95a6c();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03f95a6c(lVar11);
      }
      lVar9 = *(long *)uVar13;
      uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar11) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_077ba100;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(uVar13,lVar11,0);
LAB_077ba100:
      uVar5 = (*(code *)*puVar8)(uVar13,uVar2,puVar8[1]);
      if ((uVar5 & 1) != 0) {
LAB_077ba114:
        lVar11 = *(long *)(param_1 + 10);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(lVar11 + 0x30) == 200) {
          uVar5 = _GAME_Profile_ProfileServer__HasWireStatus(*(undefined8 *)(lVar11 + 0x40));
          if ((uVar5 & 1) != 0) {
            if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar13 = *(undefined8 *)(*(long *)(param_1 + 10) + 0x40);
            if (*(int *)(DAT_09187300 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar11 = FUN_04bd15a4(uVar13,DAT_091d1640);
            if (lVar11 != 0) {
              bVar3 = *(int *)(lVar11 + 0x10) == 0;
              goto LAB_077ba184;
            }
          }
        }
      }
    }
  }
  else {
    uVar5 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(param_1 + 8),0);
    if ((uVar5 & 1) == 0) {
      if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09522cb0 == '\0') {
        FUN_03f5c2a4(&DAT_09180dc0);
        DAT_09522cb0 = '\x01';
      }
      if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = _GAME_Utils_HelperString__IsNullOrEmpty(**(undefined8 **)(DAT_09180dc0 + 0xb8),0);
      if ((uVar5 & 1) == 0) {
        lVar11 = *(long *)(param_1 + 8);
        if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_09522cb0 == '\0') {
          FUN_03f5c2a4(&DAT_09180dc0);
          DAT_09522cb0 = '\x01';
        }
        if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar5 = System_String__Equals(lVar11,**(undefined8 **)(DAT_09180dc0 + 0xb8),0);
        if ((uVar5 & 1) == 0) {
          lVar11 = thunk_FUN_03f9944c(DAT_09193748);
          _GAME_Profile_ProfileDbModel_PreviewModel___ctor();
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(param_1 + 8);
          thunk_FUN_03f5d7b8();
          lVar9 = DAT_09180dc0;
          *(undefined8 *)(lVar11 + 0x40) = 0xffffffffffffffff;
          iVar1 = *(int *)(lVar9 + 0xe4);
          *(undefined4 *)(lVar11 + 0x48) = 0xffffffff;
          if (iVar1 == 0) {
            FUN_03f5c424();
          }
          uVar4 = _GAME_BaseGame_ABIServerAPI__get_ProjectProfileId(0);
          uVar13 = *(undefined8 *)(param_1 + 8);
          if (*(int *)(DAT_09187300 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = Newtonsoft_Json_JsonConvert__SerializeObject(lVar11,0);
          uVar7 = thunk_FUN_03f9944c(DAT_0918dea0);
          _GAME_Profile_ABIServerPushProfileModel_RequestModel___ctor
                    (uVar7,uVar4,uVar13,DAT_091f5700,DAT_091f5700,0,0,uVar6);
          uVar13 = _GAME_BaseGame_ABIServerAPI__get_UrlSvProfile(0);
          uVar6 = Newtonsoft_Json_JsonConvert__SerializeObject(uVar7,0);
          uVar7 = thunk_FUN_03f9944c(DAT_0918cfb8);
          _GAME_BaseGame_WebRequestModel___ctor(uVar7,uVar13,1,10,uVar6,0);
          piVar10 = param_1 + 10;
          *(undefined8 *)piVar10 = uVar7;
          thunk_FUN_03f5d7b8(piVar10,uVar7);
          auVar14 = _GAME_BaseGame_ABIServerAPI__SendWebRequest(*(undefined8 *)piVar10,0,0,0);
          local_40._0_8_ = 0;
          local_40._8_8_ = 0;
          if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
            FUN_03f95a6c();
          }
          local_40 = auVar14;
          thunk_FUN_03f5d7b8(local_40,0);
          local_50 = local_40;
          uVar5 = FUN_0430cf0c(local_50,DAT_0919a588);
          if ((uVar5 & 1) == 0) {
            *param_1 = 0;
            *(undefined1 (*) [16])(param_1 + 0xc) = local_50;
            thunk_FUN_03f5d7b8(param_1 + 0xc,0);
            FUN_0478e96c(param_1 + 2,local_50,param_1,DAT_091997e0);
            return;
          }
          goto LAB_077ba060;
        }
      }
    }
  }
  bVar3 = false;
LAB_077ba184:
  plVar12 = *(long **)(param_1 + 2);
  *param_1 = -2;
  if (plVar12 == (long *)0x0) {
    *(bool *)(param_1 + 6) = bVar3;
  }
  else {
    lVar11 = *(long *)(DAT_09199a20 + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_03f95a6c();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_03f95a6c(lVar11);
    }
    lVar9 = *plVar12;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar11) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_077ba228;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(plVar12,lVar11,2);
LAB_077ba228:
    (*(code *)*puVar8)(plVar12,bVar3,puVar8[1]);
  }
  return;
}

