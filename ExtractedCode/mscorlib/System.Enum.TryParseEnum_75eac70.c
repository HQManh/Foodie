// rea decompile_all
// name: System.Enum$$TryParseEnum
// address: 0x75eac70
// body: available
// range: 0x75eac70-0x75eafdb inclusive
// range: 0x75eb024-0x75eb1eb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75eaf68 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75eafd8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75eb1e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75eb1e8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Enum__TryParseEnum(long *param_1,long param_2,ulong param_3,undefined8 *param_4)

{
  long lVar1;
  uint uVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  uint uVar17;
  ulong uVar18;
  long *plVar19;
  
  if ((DAT_09521efa & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_0918a400);
    FUN_03f5c2a4(&DAT_09225370);
    FUN_03f5c2a4(&DAT_0920bda0);
    FUN_03f5c2a4(&DAT_09208378);
    DAT_09521efa = 1;
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = System_Type__op_Equality(param_1,0,0);
  if ((uVar6 & 1) != 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar8 = thunk_FUN_03f9944c();
    uVar9 = thunk_FUN_03fc39d4(&DAT_0921b048);
    System_ArgumentNullException___ctor(uVar8,uVar9,0);
    uVar9 = thunk_FUN_03fc39d4(&DAT_091c9088);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar8,uVar9);
  }
  if (param_1 == (long *)0x0) {
LAB_075ead48:
    plVar19 = (long *)0x0;
  }
  else {
    if (*(byte *)(*param_1 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) goto LAB_075ead48;
    plVar19 = param_1;
    if (*(long *)(*(long *)(*param_1 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) !=
        DAT_0918a400) {
      plVar19 = (long *)0x0;
    }
  }
  if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (plVar19 == (long *)0x0) {
    puVar10 = &DAT_09211258;
  }
  else {
    if (param_1 == (long *)0x0) {
LAB_075eb1e4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar6 = (**(code **)(*param_1 + 0x5d8))(param_1,*(undefined8 *)(*param_1 + 0x5e0));
    if ((uVar6 & 1) != 0) {
      if (param_2 == 0) {
        System_Enum_EnumResult__SetFailure(param_4,2,DAT_09225370);
      }
      else {
        lVar7 = System_String__Trim(param_2,0);
        if (lVar7 == 0) goto LAB_075eb1e4;
        if (*(int *)(lVar7 + 0x10) != 0) {
          uVar4 = System_String__get_Chars(lVar7,0,0);
          if (*(int *)(DAT_09535460 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09535460);
          }
          uVar6 = System_Char__IsDigit(uVar4,0);
          if ((((uVar6 & 1) == 0) && (sVar3 = System_String__get_Chars(lVar7,0,0), sVar3 != 0x2d))
             && (sVar3 = System_String__get_Chars(lVar7,0,0), sVar3 != 0x2b)) {
            if (*(int *)(DAT_09535470 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar12 = System_String__Split(lVar7,**(undefined8 **)(DAT_09535470 + 0xb8),0);
            lVar13 = System_Enum__GetCachedValuesAndNames(plVar19,1);
            if ((lVar13 == 0) || (lVar12 == 0)) goto LAB_075eb1e4;
            uVar2 = *(uint *)(lVar12 + 0x18);
            if (0 < (int)uVar2) {
              lVar1 = *(long *)(lVar13 + 0x10);
              lVar13 = *(long *)(lVar13 + 0x18);
              uVar17 = 0;
              uVar6 = 0;
LAB_075eb090:
              if (uVar17 < uVar2) {
                plVar19 = (long *)(lVar12 + (long)(int)uVar17 * 8 + 0x20);
                if (*plVar19 == 0) goto LAB_075eb1e4;
                lVar14 = System_String__Trim(*plVar19,0);
                if (*(uint *)(lVar12 + 0x18) <= uVar17) goto LAB_075eb1e8;
                *plVar19 = lVar14;
                thunk_FUN_03f5d7b8(lVar12 + 0x20 + (long)(int)uVar17 * 8);
                if (lVar13 == 0) goto LAB_075eb1e4;
                if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
                  uVar18 = 0;
                  uVar15 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
                  do {
                    if ((param_3 & 1) == 0) {
                      if ((uVar15 <= uVar18) || (*(uint *)(lVar12 + 0x18) <= uVar17))
                      goto LAB_075eb1e8;
                      lVar14 = *(long *)(lVar13 + 0x20 + uVar18 * 8);
                      if (lVar14 == 0) goto LAB_075eb1e4;
                      uVar15 = System_String__Equals(lVar14,*plVar19,0);
                      if ((uVar15 & 1) != 0) goto LAB_075eb160;
                    }
                    else {
                      if ((uVar15 <= uVar18) || (*(uint *)(lVar12 + 0x18) <= uVar17))
                      goto LAB_075eb1e8;
                      iVar5 = System_String__Compare
                                        (*(undefined8 *)(lVar13 + 0x20 + uVar18 * 8),*plVar19,5,0);
                      if (iVar5 == 0) goto LAB_075eb160;
                    }
                    uVar15 = (ulong)*(uint *)(lVar13 + 0x18);
                    uVar18 = uVar18 + 1;
                    if ((long)(int)*(uint *)(lVar13 + 0x18) <= (long)uVar18) break;
                  } while( true );
                }
                uVar8 = 3;
                puVar16 = &DAT_0920bda0;
                goto LAB_075eaef8;
              }
LAB_075eb1e8:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            uVar6 = 0;
LAB_075eb1b4:
            if (*(int *)(DAT_09535470 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar8 = System_Enum__ToObject(param_1,uVar6);
            *param_4 = uVar8;
            thunk_FUN_03f5d7b8(param_4);
          }
          else {
            if (*(int *)(DAT_09535470 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar8 = System_Enum__GetUnderlyingType(param_1);
            if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09182ff8);
            }
            uVar9 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar8 = System_Convert__ChangeType(lVar7,uVar8,uVar9,0);
            if (*(int *)(DAT_09535470 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar8 = System_Enum__ToObject(param_1,uVar8);
            *param_4 = uVar8;
            thunk_FUN_03f5d7b8(param_4);
          }
          return 1;
        }
        uVar8 = 1;
        puVar16 = &DAT_09208378;
        lVar7 = 0;
LAB_075eaef8:
        System_Enum_EnumResult__SetFailure(param_4,uVar8,*puVar16,lVar7);
      }
      return 0;
    }
    puVar10 = &DAT_092112c0;
  }
  uVar8 = thunk_FUN_03fc39d4(puVar10);
  uVar8 = System_Environment__GetResourceString(uVar8,0);
  thunk_FUN_03fc39d4(&DAT_09181548);
  uVar9 = thunk_FUN_03f9944c();
  uVar11 = thunk_FUN_03fc39d4(&DAT_0921b048);
  System_ArgumentException___ctor(uVar9,uVar8,uVar11,0);
  uVar8 = thunk_FUN_03fc39d4(&DAT_091c9088);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar9,uVar8);
LAB_075eb160:
  if (lVar1 == 0) goto LAB_075eb1e4;
  if ((uint)uVar18 < *(uint *)(lVar1 + 0x18)) {
    uVar2 = *(uint *)(lVar12 + 0x18);
    uVar17 = uVar17 + 1;
    uVar6 = *(ulong *)(lVar1 + 0x20 + uVar18 * 8) | uVar6;
    if ((int)uVar2 <= (int)uVar17) goto LAB_075eb1b4;
    goto LAB_075eb090;
  }
  goto LAB_075eb1e8;
}

