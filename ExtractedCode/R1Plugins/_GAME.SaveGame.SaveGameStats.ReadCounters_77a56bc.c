// rea decompile_all
// name: _GAME.SaveGame.SaveGameStats$$ReadCounters
// address: 0x77a56bc
// body: available
// range: 0x77a56bc-0x77a5b47 inclusive
// range: 0x77a5bc4-0x77a5bc7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77a5b14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a5b2c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a5b44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a5bc4 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _GAME_SaveGame_SaveGameStats__ReadCounters(undefined8 *param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_09522e3f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_0919f660);
    FUN_03f5c2a4(&DAT_0919f650);
    FUN_03f5c2a4(&DAT_0919f670);
    FUN_03f5c2a4(&DAT_09176a58);
    FUN_03f5c2a4(&DAT_091a6690);
    FUN_03f5c2a4(&DAT_091a6698);
    FUN_03f5c2a4(&DAT_091a66a0);
    FUN_03f5c2a4(&DAT_091a97a8);
    FUN_03f5c2a4(&DAT_091a97b0);
    FUN_03f5c2a4(&DAT_091b4928);
    FUN_03f5c2a4(&DAT_091b4930);
    FUN_03f5c2a4(&DAT_0918a5a8);
    FUN_03f5c2a4(&DAT_091f95f0);
    DAT_09522e3f = 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uVar3 = FUN_05a8eda4(DAT_091b4930);
  if ((uVar3 & 1) == 0) {
LAB_077a5838:
    if (*(int *)(DAT_0918a5a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = _GAME_SaveGame_SaveGameStats__ReadStoredUserState();
LAB_077a584c:
    *param_1 = uVar5;
    thunk_FUN_03f5d7b8(param_1,uVar5);
    lVar4 = thunk_FUN_03f9944c(DAT_09176a58);
    FUN_06fc24fc(lVar4,DAT_0919f650);
    if (*(int *)(DAT_0918a5a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar8 = **(long **)(DAT_0918a5a8 + 0xb8);
    if (lVar8 != 0) {
      if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
        uVar3 = 0;
        uVar7 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
        do {
          if (uVar7 <= uVar3) goto LAB_077a5b18;
          uVar5 = *(undefined8 *)(lVar8 + 0x20 + uVar3 * 8);
          uVar2 = UnityEngine_PlayerPrefs__GetInt(uVar5,0,0);
          if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091837d8);
          }
          auVar11 = System_Decimal__op_Implicit(uVar2,0);
          if (lVar4 == 0) goto LAB_077a5b00;
          FUN_06fc3390(lVar4,uVar5,auVar11._0_8_,auVar11._8_8_,DAT_0919f670);
          uVar7 = (ulong)*(uint *)(lVar8 + 0x18);
          uVar3 = uVar3 + 1;
        } while ((long)uVar3 < (long)(int)*(uint *)(lVar8 + 0x18));
      }
      if (*(int *)(DAT_0918a5a8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar8 = *(long *)(*(long *)(DAT_0918a5a8 + 0xb8) + 8);
      if (lVar8 != 0) {
        if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
          uVar3 = 0;
          uVar7 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
          do {
            if (uVar7 <= uVar3) goto LAB_077a5b18;
            uVar9 = *(undefined8 *)(lVar8 + 0x20 + uVar3 * 8);
            uVar5 = UnityEngine_PlayerPrefs__GetString(uVar9,DAT_091f95f0,0);
            if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09182ff8);
            }
            uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
              FUN_03f5c424(DAT_091837d8);
            }
            puVar10 = &local_78;
            uVar7 = System_Decimal__TryParse(uVar5,0x1ff,uVar6,&local_78,0);
            if ((uVar7 & 1) == 0) {
              if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              puVar10 = *(undefined8 **)(DAT_091837d8 + 0xb8);
            }
            if (lVar4 == 0) goto LAB_077a5b00;
            FUN_06fc3390(lVar4,uVar9,*puVar10,puVar10[1],DAT_0919f670);
            uVar7 = (ulong)*(uint *)(lVar8 + 0x18);
            uVar3 = uVar3 + 1;
          } while ((long)uVar3 < (long)(int)*(uint *)(lVar8 + 0x18));
        }
        uVar5 = *param_1;
        if (*(int *)(DAT_0918a5a8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar8 = _GAME_SaveGame_SaveGameStats__Counters(0,uVar5);
        if (lVar8 != 0) {
          FUN_06fc382c(&local_b0,lVar8,DAT_0919f660);
          while (uVar3 = FUN_07271e30(&local_b0,DAT_091a6698), (uVar3 & 1) != 0) {
            if (lVar4 == 0) {
              if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              goto LAB_077a5bc4;
            }
            FUN_06fc3390(lVar4,local_a0,uStack_98,uStack_90,DAT_0919f670);
          }
          FUN_07271fac(&local_b0,DAT_091a6690);
          if (*(long *)(lVar1 + 0x28) == local_68) {
            return lVar4;
          }
          goto LAB_077a5bc4;
        }
      }
    }
  }
  else {
    lVar4 = *(long *)(DAT_091b4928 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (**(long **)(lVar4 + 0xb8) != 0) {
      lVar4 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x28);
      if (lVar4 == 0) goto LAB_077a5838;
      uVar5 = Newtonsoft_Json_Linq_JObject__FromObject(lVar4,0);
      goto LAB_077a584c;
    }
  }
LAB_077a5b00:
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_077a5bc4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_077a5b18:
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  goto LAB_077a5bc4;
}

