// rea decompile_all
// name: Newtonsoft.Json.Utilities.EnumUtils$$ParseEnum
// address: 0x76921e0
// body: available
// range: 0x76921e0-0x769264f inclusive
// range: 0x76926ac-0x769293b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x769248c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769264c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76928d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76928d8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Utilities_EnumUtils__ParseEnum
               (undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_70;
  ulong local_68;
  
  if ((DAT_095225a6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091840e8);
    FUN_03f5c2a4(&DAT_091b6fb8);
    FUN_03f5c2a4(&DAT_091b6fc0);
    FUN_03f5c2a4(&DAT_091bb798);
    FUN_03f5c2a4(&DAT_091bd3b0);
    FUN_03f5c2a4(&DAT_09225370);
    FUN_03f5c2a4(&DAT_0921b048);
    DAT_095225a6 = 1;
  }
  local_68 = 0;
  local_70 = 0;
  Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_1,DAT_0921b048,0);
  Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_3,DAT_09225370,0);
  uVar4 = Newtonsoft_Json_Utilities_TypeExtensions__IsEnum(param_1,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(DAT_091840e8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar11 = **(long **)(DAT_091840e8 + 0xb8);
    local_88 = 0;
    uStack_80 = 0;
    FUN_061d6efc(&local_88,param_1,param_2,DAT_091bb798);
    if (((lVar11 != 0) &&
        (lVar11 = FUN_06360fa4(lVar11,local_88,uStack_80,DAT_091bd3b0), lVar11 != 0)) &&
       (param_3 != 0)) {
      uVar5 = *(undefined8 *)(lVar11 + 0x20);
      uVar6 = *(undefined8 *)(lVar11 + 0x28);
      lVar11 = *(long *)(lVar11 + 0x18);
      local_68 = Newtonsoft_Json_Utilities_EnumUtils__FindIndexByName
                           (uVar6,param_3,0,*(undefined4 *)(param_3 + 0x10),4);
      if ((local_68 & 0xff) == 0) {
        if (0 < *(int *)(param_3 + 0x10)) {
          iVar12 = 0;
          do {
            uVar2 = System_String__get_Chars(param_3,iVar12,0);
            if (*(int *)(DAT_09535460 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09535460);
            }
            uVar4 = System_Char__IsWhiteSpace(uVar2,0);
            if ((uVar4 & 1) == 0) {
              uVar1 = System_String__get_Chars(param_3,iVar12,0);
              if (*(int *)(DAT_09535460 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09535460);
              }
              uVar4 = System_Char__IsDigit(uVar1,0);
              if ((((uVar4 & 1) != 0) || ((uVar1 & 0xffff) == 0x2d)) || ((uVar1 & 0xffff) == 0x2b))
              {
                if (*(int *)(DAT_09535470 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar7 = System_Enum__GetUnderlyingType(param_1,0);
                param_3 = System_String__Trim(param_3,0);
                if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09182ff8);
                }
                uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
                if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                lVar9 = System_Convert__ChangeType(param_3,uVar7,uVar8,0);
                if (lVar9 != 0) {
                  if ((param_4 & 1) == 0) {
                    if (*(int *)(DAT_09535470 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    System_Enum__ToObject(param_1,lVar9,0);
                    return;
                  }
                  thunk_FUN_03fc39d4(&DAT_09182ff8);
                  FUN_039afb80();
                  uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
                  uVar6 = thunk_FUN_03fc39d4(&DAT_09204f38);
                  uVar5 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar6,uVar5,param_3,0);
                  thunk_FUN_03fc39d4(&DAT_09184908);
                  uVar6 = thunk_FUN_03f9944c();
                  System_FormatException___ctor(uVar6,uVar5,0);
                  goto LAB_07692638;
                }
                if (param_3 == 0) goto LAB_076928d4;
              }
              if (*(int *)(param_3 + 0x10) < iVar12) {
                uVar4 = 0;
                goto LAB_0769283c;
              }
              uVar4 = 0;
              goto LAB_076926c8;
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < *(int *)(param_3 + 0x10));
        }
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar5 = thunk_FUN_03f9944c();
        uVar6 = thunk_FUN_03fc39d4(&DAT_09208378);
        System_ArgumentException___ctor(uVar5,uVar6,0);
        goto LAB_07692478;
      }
      uVar1 = FUN_05c307a4(&local_68,DAT_091b6fc0);
      if (lVar11 != 0) {
        if (*(uint *)(lVar11 + 0x18) <= uVar1) {
LAB_076928d8:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar4 = *(ulong *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
        if (*(int *)(DAT_09535470 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09535470);
        }
        goto LAB_076923b8;
      }
    }
LAB_076928d4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  thunk_FUN_03fc39d4(&DAT_09181548);
  uVar5 = thunk_FUN_03f9944c();
  uVar6 = thunk_FUN_03fc39d4(&DAT_092112c0);
  uVar7 = thunk_FUN_03fc39d4(&DAT_0921b048);
  System_ArgumentException___ctor(uVar5,uVar6,uVar7,0);
LAB_07692478:
  uVar6 = thunk_FUN_03fc39d4(&DAT_091c9220);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar6);
  while( true ) {
    uVar1 = FUN_05c307a4(&local_68,DAT_091b6fc0);
    if (lVar11 == 0) goto LAB_076928d4;
    if (*(uint *)(lVar11 + 0x18) <= uVar1) goto LAB_076928d8;
    iVar12 = iVar3 + 1;
    uVar4 = *(ulong *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) | uVar4;
    if (*(int *)(param_3 + 0x10) < iVar12) break;
LAB_076926c8:
    iVar3 = System_String__IndexOf(param_3,0x2c,iVar12,0);
    if (iVar3 == -1) {
      iVar3 = *(int *)(param_3 + 0x10);
    }
    iVar14 = iVar3;
    iVar13 = iVar12;
    if (iVar12 < iVar3) {
      do {
        uVar2 = System_String__get_Chars(param_3,iVar12,0);
        if (*(int *)(DAT_09535460 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09535460);
        }
        uVar10 = System_Char__IsWhiteSpace(uVar2,0);
        iVar13 = iVar12;
      } while (((uVar10 & 1) != 0) && (iVar12 = iVar12 + 1, iVar13 = iVar3, iVar3 != iVar12));
    }
    do {
      iVar12 = iVar14 - iVar13;
      if (iVar12 == 0 || iVar14 < iVar13) break;
      uVar2 = System_String__get_Chars(param_3,iVar14 + -1,0);
      if (*(int *)(DAT_09535460 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09535460);
      }
      uVar10 = System_Char__IsWhiteSpace(uVar2,0);
      iVar14 = iVar14 + -1;
    } while ((uVar10 & 1) != 0);
    if (*(int *)(DAT_091840e8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_68 = Newtonsoft_Json_Utilities_EnumUtils__MatchName(param_3,uVar5,uVar6,iVar13,iVar12,4);
    if ((local_68 & 0xff) == 0) {
      if (*(int *)(DAT_091840e8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_68 = Newtonsoft_Json_Utilities_EnumUtils__MatchName(param_3,uVar5,uVar6,iVar13,iVar12,5)
      ;
      if ((local_68 & 0xff) == 0) {
        uVar2 = *(undefined4 *)(param_3 + 0x10);
        if (*(int *)(DAT_091840e8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_68 = Newtonsoft_Json_Utilities_EnumUtils__FindIndexByName(uVar6,param_3,0,uVar2,5);
        if ((local_68 & 0xff) == 0) {
          thunk_FUN_03fc39d4(&DAT_09182ff8);
          FUN_039afb80();
          uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          uVar6 = thunk_FUN_03fc39d4(&DAT_0920bda0);
          uVar5 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar6,uVar5,param_3,0);
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar6 = thunk_FUN_03f9944c();
          System_ArgumentException___ctor(uVar6,uVar5,0);
LAB_07692638:
          uVar5 = thunk_FUN_03fc39d4(&DAT_091c9220);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar6,uVar5);
        }
        uVar1 = FUN_05c307a4(&local_68,DAT_091b6fc0);
        if (lVar11 == 0) goto LAB_076928d4;
        if (*(uint *)(lVar11 + 0x18) <= uVar1) goto LAB_076928d8;
        uVar4 = *(ulong *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
        if (*(int *)(DAT_09535470 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09535470);
        }
        goto LAB_076923b8;
      }
    }
  }
LAB_0769283c:
  if (*(int *)(DAT_09535470 + 0xe4) == 0) {
    FUN_03f5c424();
  }
LAB_076923b8:
  System_Enum__ToObject(param_1,uVar4,0);
  return;
}

