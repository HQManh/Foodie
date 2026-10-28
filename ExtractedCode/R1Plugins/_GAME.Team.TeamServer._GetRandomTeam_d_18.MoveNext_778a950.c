// rea decompile_all
// name: _GAME.Team.TeamServer.<GetRandomTeam>d__18$$MoveNext
// address: 0x778a950
// body: available
// range: 0x778a950-0x778b013 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x778aff4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x778aff8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x778affc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x778b000 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x778b004 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x778b008 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x778b010 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0778aff0) */
/* WARNING: Removing unreachable block (ram,0x0778b00c) */

void _GAME_Team_TeamServer_<GetRandomTeam>d__18__MoveNext(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  long *plVar16;
  undefined1 auVar17 [16];
  undefined1 local_b0 [8];
  undefined8 uStack_a8;
  undefined1 *local_a0;
  undefined4 local_88;
  undefined1 local_80 [16];
  undefined1 *local_70;
  undefined1 local_60 [16];
  int local_44;
  
  if ((DAT_09522d80 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_091995a8);
    FUN_03f5c2a4(&DAT_091995e8);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_091a59c0);
    FUN_03f5c2a4(&DAT_091a59c8);
    FUN_03f5c2a4(&DAT_091a59d0);
    FUN_03f5c2a4(&DAT_091d16b0);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_091b0c18);
    FUN_03f5c2a4(&DAT_091b3da0);
    FUN_03f5c2a4(&DAT_091b0c10);
    FUN_03f5c2a4(&DAT_0917cdf8);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_0918df20);
    FUN_03f5c2a4(&DAT_0918b958);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_0918cfb8);
    DAT_09522d80 = 1;
  }
  local_44 = *param_1;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  local_70 = (undefined1 *)0x0;
  local_88 = 0;
  if (local_44 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    local_44 = -1;
    *param_1 = -1;
LAB_0778ac7c:
    uVar8 = local_60._0_8_;
    if ((long *)local_60._0_8_ == (long *)0x0) {
      if (local_60[8] != '\0') goto LAB_0778ad6c;
    }
    else {
      uVar4 = local_60._10_2_;
      lVar11 = *(long *)(DAT_0919a580 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03f95a6c();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03f95a6c(lVar11);
      }
      lVar13 = *(long *)uVar8;
      uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar7 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar11) {
            puVar12 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0778ad58;
          }
          uVar7 = uVar7 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar7 != 0);
      }
      puVar12 = (undefined8 *)FUN_03f95da8(uVar8,lVar11,0);
LAB_0778ad58:
      uVar7 = (*(code *)*puVar12)(uVar8,uVar4,puVar12[1]);
      if ((uVar7 & 1) != 0) {
LAB_0778ad6c:
        lVar11 = *(long *)(param_1 + 10);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(lVar11 + 0x30) == 200) {
          uVar8 = *(undefined8 *)(lVar11 + 0x40);
          if (*(int *)(DAT_09187300 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar11 = FUN_04bd15a4(uVar8,DAT_091d16b0);
          if ((lVar11 != 0) && (*(int *)(lVar11 + 0x10) == 0)) {
            lVar13 = thunk_FUN_03f9944c(DAT_0917cdf8);
            FUN_057e0400(lVar13,DAT_091b0c10);
            if (*(long *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar11 = *(long *)(*(long *)(lVar11 + 0x18) + 0x10);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_057e185c(local_b0,lVar11,DAT_091b3da0);
            local_80 = _local_b0;
            uStack_a8 = &local_44;
            local_70 = local_a0;
            local_a0 = local_80;
            local_b0 = (undefined1  [8])0x0;
            while( true ) {
              uVar7 = FUN_071bd28c(local_80,DAT_091a59c8);
              puVar3 = local_70;
              if ((uVar7 & 1) == 0) break;
              uVar8 = thunk_FUN_03f9944c(DAT_0918b958);
              _GAME_Team_TeamInfoModel___ctor(uVar8,puVar3);
              lVar11 = DAT_091b0c18;
              if (lVar13 == 0) {
LAB_0778aff4:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar14 = *(long *)(lVar13 + 0x10);
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (lVar14 == 0) goto LAB_0778aff4;
              uVar2 = *(uint *)(lVar13 + 0x18);
              if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                puVar12 = (undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20);
                *puVar12 = uVar8;
                thunk_FUN_03f5d7b8(puVar12,uVar8);
              }
              else {
                FUN_057e0c68(lVar13,uVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
            }
            if (local_44 < 0) {
              FUN_071bd288(local_a0,DAT_091a59c0);
            }
            goto LAB_0778adc4;
          }
        }
      }
    }
  }
  else {
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
    uVar7 = _GAME_Utils_HelperString__IsNullOrEmpty(**(undefined8 **)(DAT_09180dc0 + 0xb8),0);
    if ((uVar7 & 1) == 0) {
      if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_091896c0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar1 = *(int *)(**(long **)(DAT_091896c0 + 0xb8) + 0x78);
      iVar5 = _GAME_Bridge_CookOrderBridge__GetHomeTabUnlockLevel(1,0);
      if (iVar1 < iVar5) {
        uVar6 = _GAME_Bridge_CookOrderBridge__GetHomeTabUnlockLevel(1,0);
      }
      else {
        if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (**(long **)(DAT_091896c0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar6 = *(undefined4 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x78);
      }
      uVar8 = thunk_FUN_03f9944c(DAT_0918df20);
      _GAME_Team_ABIServerTeamGetRandomModel_RequestModel___ctor(uVar8,uVar6);
      if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar9 = _GAME_BaseGame_ABIServerAPI__get_UrlSvRoom(0);
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar8 = Newtonsoft_Json_JsonConvert__SerializeObject(uVar8,0);
      uVar10 = thunk_FUN_03f9944c(DAT_0918cfb8);
      _GAME_BaseGame_WebRequestModel___ctor(uVar10,uVar9,1,10,uVar8,0);
      *(undefined8 *)(param_1 + 10) = uVar10;
      thunk_FUN_03f5d7b8(param_1 + 10,uVar10);
      auVar17 = _GAME_BaseGame_ABIServerAPI__SendWebRequest
                          (*(undefined8 *)(param_1 + 10),(char)param_1[8],(char)param_1[8],0);
      local_b0 = (undefined1  [8])0x0;
      uStack_a8 = (int *)0x0;
      if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      _local_b0 = auVar17;
      thunk_FUN_03f5d7b8(local_b0,0);
      local_60 = _local_b0;
      uVar7 = FUN_0430cf0c(local_60,DAT_0919a588);
      if ((uVar7 & 1) == 0) {
        local_44 = 0;
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0xc) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 0xc,0);
        FUN_047933d4(param_1 + 2,local_60,param_1,DAT_091995a8);
        return;
      }
      goto LAB_0778ac7c;
    }
  }
  lVar13 = 0;
LAB_0778adc4:
  *param_1 = -2;
  piVar15 = param_1 + 10;
  piVar15[0] = 0;
  piVar15[1] = 0;
  thunk_FUN_03f5d7b8(piVar15,0);
  plVar16 = *(long **)(param_1 + 2);
  if (plVar16 == (long *)0x0) {
    *(long *)(param_1 + 6) = lVar13;
    thunk_FUN_03f5d7b8(param_1 + 6,lVar13);
  }
  else {
    lVar11 = *(long *)(DAT_091995e8 + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_03f95a6c();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_03f95a6c(lVar11);
    }
    lVar14 = *plVar16;
    uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar7 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar11) {
          puVar12 = (undefined8 *)(lVar14 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_0778ae84;
        }
        uVar7 = uVar7 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar7 != 0);
    }
    puVar12 = (undefined8 *)FUN_03f95da8(plVar16,lVar11,2);
LAB_0778ae84:
    (*(code *)*puVar12)(plVar16,lVar13,puVar12[1]);
  }
  return;
}

