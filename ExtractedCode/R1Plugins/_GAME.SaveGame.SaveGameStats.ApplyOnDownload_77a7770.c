// rea decompile_all
// name: _GAME.SaveGame.SaveGameStats$$ApplyOnDownload
// address: 0x77a7770
// body: available
// range: 0x77a7770-0x77a7e2b inclusive
// range: 0x77a7eb4-0x77a7eb7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77a7e10 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a7e28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a7eb4 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_SaveGame_SaveGameStats__ApplyOnDownload(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined8 local_100;
  undefined8 *puStack_f8;
  undefined8 local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 *puStack_98;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((DAT_09522e3c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0250);
    FUN_03f5c2a4(&DAT_091c4d38);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_0919f9b0);
    FUN_03f5c2a4(&DAT_091a6750);
    FUN_03f5c2a4(&DAT_091a6758);
    FUN_03f5c2a4(&DAT_091a6760);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_09187450);
    FUN_03f5c2a4(&DAT_091a9818);
    FUN_03f5c2a4(&DAT_091a9820);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091b4928);
    FUN_03f5c2a4(&DAT_091b4930);
    FUN_03f5c2a4(&DAT_0918a5a8);
    FUN_03f5c2a4(&DAT_09217568);
    FUN_03f5c2a4(&DAT_092185d0);
    DAT_09522e3c = 1;
  }
  local_e0 = 0;
  local_d8 = 0;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  puStack_f8 = (undefined8 *)0x0;
  local_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  auVar14 = ZEXT816(0);
  if (param_1 == 0) {
LAB_077a7dcc:
    local_88 = auVar14;
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
    if (*(int *)(DAT_0918a5a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = _GAME_SaveGame_SaveGameStats__ReadCounters(&local_d8);
    uVar5 = _GAME_SaveGame_SaveGameStats__LoadBase(param_2);
    uVar4 = _GAME_SaveGame_SaveGameStats__Merge(param_1,uVar4,uVar5);
    lVar12 = **(long **)(DAT_0918a5a8 + 0xb8);
    if (lVar12 != 0) {
      if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
        uVar13 = 0;
        uVar10 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
        do {
          if (uVar10 <= uVar13) goto LAB_077a7dfc;
          uVar5 = *(undefined8 *)(lVar12 + 0x20 + uVar13 * 8);
          local_a0 = 0;
          puStack_98 = (undefined8 *)0x0;
          System_Decimal___ctor(&local_a0,0x7fffffff,0);
          auVar14 = FUN_04a5f8f0(uVar4,uVar5,DAT_091c4d38);
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puStack_c8 = puStack_98;
          local_d0 = local_a0;
          local_78 = auVar14;
          if (DAT_09522f02 == '\0') {
            FUN_03f5c2a4(&DAT_091837d8);
            DAT_09522f02 = '\x01';
          }
          if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar6 = (undefined8 *)System_Decimal__Min(&local_d0,local_78,0);
          uVar7 = *puVar6;
          uVar1 = puVar6[1];
          if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = System_Decimal__op_Explicit(uVar7,uVar1,0);
          UnityEngine_PlayerPrefs__SetInt(uVar5,uVar3,0);
          uVar10 = (ulong)*(uint *)(lVar12 + 0x18);
          uVar13 = uVar13 + 1;
        } while ((long)uVar13 < (long)(int)*(uint *)(lVar12 + 0x18));
      }
      if (*(int *)(DAT_0918a5a8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar12 = *(long *)(*(long *)(DAT_0918a5a8 + 0xb8) + 8);
      if (lVar12 != 0) {
        if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
          uVar13 = 0;
          uVar10 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
          do {
            if (uVar10 <= uVar13) goto LAB_077a7dfc;
            uVar5 = *(undefined8 *)(lVar12 + 0x20 + uVar13 * 8);
            auVar14 = FUN_04a5f8f0(uVar4,uVar5,DAT_091c4d38);
            local_88 = auVar14;
            if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
              FUN_03f5c424(DAT_091837d8);
            }
            uVar7 = System_Decimal__ToString(local_88,uVar7,0);
            UnityEngine_PlayerPrefs__SetString(uVar5,uVar7,0);
            uVar10 = (ulong)*(uint *)(lVar12 + 0x18);
            uVar13 = uVar13 + 1;
          } while ((long)uVar13 < (long)(int)*(uint *)(lVar12 + 0x18));
        }
        if (*(int *)(DAT_0918a5a8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar12 = _GAME_SaveGame_SaveGameStats__MergeBuckets(param_1);
        if (lVar12 != 0) {
          FUN_06fca844(&local_d0,lVar12,DAT_0919f9b0);
          local_e0 = local_b0;
          puStack_f8 = puStack_c8;
          local_100 = local_d0;
          uStack_e8 = uStack_b8;
          local_f0 = uStack_c0;
          local_d0 = 0;
          puStack_c8 = &local_100;
          while (uVar10 = FUN_07272f90(&local_100,DAT_091a6758), uVar13 = uStack_e8,
                (uVar10 & 1) != 0) {
            uVar5 = System_String__Concat(DAT_092185d0,local_f0,0);
            UnityEngine_PlayerPrefs__SetInt(uVar5,uVar13 & 0xffffffff,0);
          }
          FUN_072730b4(&local_100,DAT_091a6750);
          uVar5 = local_d8;
          uVar7 = *(undefined8 *)(param_1 + 0x28);
          if (*(int *)(DAT_0918a5a8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar12 = _GAME_SaveGame_SaveGameStats__MergeUserState(uVar5,uVar7,uVar4);
          uVar13 = FUN_05a8eda4(DAT_091b4930);
          if ((uVar13 & 1) == 0) {
LAB_077a7d00:
            lVar8 = DAT_091c0250;
            lVar9 = *(long *)(DAT_091c0250 + 0x38);
            if (lVar9 == 0) {
              FUN_03f95ac8(DAT_091c0250);
              lVar9 = *(long *)(lVar8 + 0x38);
            }
            lVar9 = *(long *)(lVar9 + 0x10);
            if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_03f95a6c();
            }
            if (*(int *)(lVar9 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
            if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_03f95a6c();
            }
            if (lVar12 != 0) {
              uVar4 = Newtonsoft_Json_Linq_JToken__ToString
                                (lVar12,0,**(undefined8 **)(lVar8 + 0xb8),0);
              UnityEngine_PlayerPrefs__SetString(DAT_09217568,uVar4,0);
LAB_077a7d94:
              UnityEngine_PlayerPrefs__Save(0);
              uVar4 = *(undefined8 *)(param_1 + 0x28);
              if (*(int *)(DAT_0918a5a8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar4 = _GAME_SaveGame_SaveGameStats__Counters(param_1,uVar4);
              _GAME_SaveGame_SaveGameStats__SaveBase(param_2,uVar4);
              auVar14 = local_88;
              goto LAB_077a7dcc;
            }
          }
          else {
            lVar8 = *(long *)(DAT_091b4928 + 0x20);
            if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_03f95a6c();
            }
            lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_03f95a6c();
            }
            lVar9 = DAT_091c0250;
            if (**(long **)(lVar8 + 0xb8) != 0) {
              lVar8 = *(long *)(**(long **)(lVar8 + 0xb8) + 0x28);
              if (lVar8 == 0) goto LAB_077a7d00;
              lVar11 = *(long *)(DAT_091c0250 + 0x38);
              if (lVar11 == 0) {
                FUN_03f95ac8(DAT_091c0250);
                lVar11 = *(long *)(lVar9 + 0x38);
              }
              lVar11 = *(long *)(lVar11 + 0x10);
              if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
                lVar11 = FUN_03f95a6c();
              }
              if (*(int *)(lVar11 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
              if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
                lVar9 = FUN_03f95a6c();
              }
              if (lVar12 != 0) {
                uVar4 = Newtonsoft_Json_Linq_JToken__ToString
                                  (lVar12,0,**(undefined8 **)(lVar9 + 0xb8),0);
                lVar12 = thunk_FUN_03f9944c(DAT_09187450);
                Newtonsoft_Json_JsonSerializerSettings___ctor(lVar12,0);
                if (lVar12 != 0) {
                  Newtonsoft_Json_JsonSerializerSettings__set_ObjectCreationHandling(lVar12,2,0);
                  if (*(int *)(DAT_09187300 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  Newtonsoft_Json_JsonConvert__PopulateObject(uVar4,lVar8,lVar12,0);
                  IapAdsSystem_UserAnalyticsState__Save(lVar8,1,0);
                  goto LAB_077a7d94;
                }
              }
            }
          }
        }
      }
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
LAB_077a7eb4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_077a7dfc:
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  goto LAB_077a7eb4;
}

