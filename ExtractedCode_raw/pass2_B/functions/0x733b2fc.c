// rea decompile_all
// name: IngameDebugConsole.DebugLogManager$$RefreshCommandSuggestions
// address: 0x733b2fc
// body: available
// range: 0x733b2fc-0x733b943 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x733b520 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x733b93c to 0x733d3e8 IngameDebugConsole.DebugLogManager$$OnEndEditCommand (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x733b940 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogManager__RefreshCommandSuggestions(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  int local_64;
  
  if ((DAT_09520662 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183668);
    FUN_03f5c2a4(&DAT_091b0d70);
    FUN_03f5c2a4(&DAT_091abcf0);
    FUN_03f5c2a4(&DAT_091adca8);
    FUN_03f5c2a4(&DAT_091b0d80);
    FUN_03f5c2a4(&DAT_091abd08);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091b0d88);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_091abd10);
    FUN_03f5c2a4(&DAT_091d4d90);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091f5a98);
    DAT_09520662 = 1;
  }
  local_64 = 0;
  if (*(char *)(param_1 + 100) == '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x128) == 0) goto LAB_0733b520;
  uVar3 = UnityEngine_UI_InputField__get_caretPosition(*(long *)(param_1 + 0x128),0);
  *(undefined4 *)(param_1 + 0x2a4) = uVar3;
  uVar4 = System_String__op_Inequality(param_2,*(undefined8 *)(param_1 + 0x290),0);
  if ((uVar4 & 1) == 0) {
LAB_0733b4b8:
    uVar15 = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x290) = param_2;
    thunk_FUN_03f5d7b8(param_1 + 0x290,param_2);
    lVar10 = *(long *)(param_1 + 0x280);
    if (lVar10 == 0) goto LAB_0733b520;
    iVar5 = *(int *)(lVar10 + 0x18);
    *(undefined4 *)(lVar10 + 0x18) = 0;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (0 < iVar5) {
      System_Array__Clear(*(undefined8 *)(lVar10 + 0x10),0,iVar5,0);
    }
    lVar10 = DAT_09183668;
    lVar14 = *(long *)(param_1 + 0x288);
    if (lVar14 == 0) goto LAB_0733b520;
    uVar16 = *(undefined8 *)(param_1 + 0x298);
    uVar18 = *(undefined8 *)(param_1 + 0x280);
    *(undefined4 *)(lVar14 + 0x18) = 0;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    IngameDebugConsole_DebugLogConsole__GetCommandSuggestions
              (param_2,uVar18,lVar14,(undefined8 *)(param_1 + 0x298),&local_64);
    uVar7 = System_String__op_Inequality(uVar16,*(undefined8 *)(param_1 + 0x298),0);
    if (((uVar7 & 1) == 0) && (local_64 == *(int *)(param_1 + 0x2a0))) goto LAB_0733b4b8;
    uVar15 = 1;
    *(int *)(param_1 + 0x2a0) = local_64;
  }
  if (*(long *)(param_1 + 0x128) != 0) {
    iVar5 = UnityEngine_UI_InputField__get_caretPosition(*(long *)(param_1 + 0x128),0);
    lVar10 = *(long *)(param_1 + 0x288);
    if (lVar10 != 0) {
      iVar13 = 0;
      do {
        if ((*(int *)(lVar10 + 0x18) <= iVar13) ||
           (iVar6 = FUN_05796eb0(lVar10,iVar13,DAT_091add20), iVar5 <= iVar6)) {
          if (*(int *)(param_1 + 0x2a8) == iVar13) {
            if ((uVar4 & uVar15) != 1) {
              return;
            }
          }
          else {
            *(int *)(param_1 + 0x2a8) = iVar13;
          }
          if (*(long *)(param_1 + 0x280) == 0) break;
          if (*(int *)(*(long *)(param_1 + 0x280) + 0x18) == 0) {
            IngameDebugConsole_DebugLogManager__OnEndEditCommand(param_1);
            return;
          }
          if ((*(long *)(param_1 + 0x120) == 0) ||
             (lVar10 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x120),0),
             lVar10 == 0)) break;
          uVar7 = UnityEngine_GameObject__get_activeSelf(lVar10,0);
          if ((uVar7 & 1) == 0) {
            if ((*(long *)(param_1 + 0x120) == 0) ||
               (lVar10 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x120),0),
               lVar10 == 0)) break;
            UnityEngine_GameObject__SetActive(lVar10,1,0);
          }
          if ((*(long *)(param_1 + 0x270) != 0) && (*(long *)(param_1 + 0x280) != 0)) {
            iVar5 = *(int *)(*(long *)(param_1 + 0x280) + 0x18);
            if (iVar5 < 1) goto LAB_0733b8a4;
            iVar6 = 0;
            iVar2 = *(int *)(*(long *)(param_1 + 0x270) + 0x18);
            goto LAB_0733b5d0;
          }
          break;
        }
        lVar10 = *(long *)(param_1 + 0x288);
        iVar13 = iVar13 + 1;
      } while (lVar10 != 0);
    }
  }
LAB_0733b520:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_0733b5d0:
  do {
    if (*(int *)(param_1 + 0x278) <= iVar6) {
      lVar10 = *(long *)(param_1 + 0x270);
      if (iVar6 < iVar2) {
        if (((lVar10 == 0) || (lVar10 = FUN_057e0998(lVar10,iVar6,DAT_091b0d88), lVar10 == 0)) ||
           (lVar10 = UnityEngine_Component__get_gameObject(lVar10,0), lVar10 == 0))
        goto LAB_0733b520;
        UnityEngine_GameObject__SetActive(lVar10,1,0);
      }
      else {
        uVar16 = *(undefined8 *)(param_1 + 0x80);
        uVar18 = *(undefined8 *)(param_1 + 0x120);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar16 = FUN_04c353a8(uVar16,uVar18,0,DAT_091d4d90);
        lVar14 = DAT_091b0d70;
        if (lVar10 == 0) goto LAB_0733b520;
        lVar19 = *(long *)(lVar10 + 0x10);
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar19 == 0) goto LAB_0733b520;
        uVar4 = *(uint *)(lVar10 + 0x18);
        if (uVar4 < *(uint *)(lVar19 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar4 + 1;
          *(undefined8 *)(lVar19 + (long)(int)uVar4 * 8 + 0x20) = uVar16;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(lVar10,uVar16,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
      }
      *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 1;
    }
    if (*(long *)(param_1 + 0x280) == 0) goto LAB_0733b520;
    lVar10 = FUN_057e0998(*(long *)(param_1 + 0x280),iVar6,DAT_091abd10);
    if (*(long *)(param_1 + 0x2f0) == 0) goto LAB_0733b520;
    System_Text_StringBuilder__set_Length(*(long *)(param_1 + 0x2f0),0,0);
    lVar14 = *(long *)(param_1 + 0x2f0);
    if (iVar13 == 0) {
      if (lVar14 == 0) goto LAB_0733b520;
      lVar14 = System_Text_StringBuilder__Append(lVar14,*(undefined8 *)(param_1 + 0xf8),0);
      if (((*(long *)(param_1 + 0x280) == 0) ||
          (lVar19 = FUN_057e0998(*(long *)(param_1 + 0x280),iVar6,DAT_091abd10), lVar19 == 0)) ||
         ((lVar14 == 0 ||
          ((lVar14 = System_Text_StringBuilder__Append(lVar14,*(undefined8 *)(lVar19 + 0x28),0),
           lVar14 == 0 ||
           (System_Text_StringBuilder__Append(lVar14,*(undefined8 *)(param_1 + 0x100),0),
           lVar10 == 0)))))) goto LAB_0733b520;
    }
    else {
      if ((lVar10 == 0) || (lVar14 == 0)) goto LAB_0733b520;
      System_Text_StringBuilder__Append(lVar14,*(undefined8 *)(lVar10 + 0x28),0);
    }
    if (*(long *)(lVar10 + 0x38) == 0) goto LAB_0733b520;
    if (*(long *)(*(long *)(lVar10 + 0x38) + 0x18) != 0) {
      if (*(long *)(param_1 + 0x2f0) == 0) goto LAB_0733b520;
      System_Text_StringBuilder__Append(*(long *)(param_1 + 0x2f0),DAT_091f5a98,0);
      lVar14 = *(long *)(lVar10 + 0x38);
      if (lVar14 == 0) goto LAB_0733b520;
      uVar7 = 0;
      lVar19 = 0x20;
      iVar1 = iVar13;
      if (*(int *)(lVar14 + 0x18) <= iVar13) {
        iVar1 = *(int *)(lVar14 + 0x18);
      }
      uVar17 = (ulong)(iVar1 - 1);
      while ((long)uVar7 < (long)(int)*(uint *)(lVar14 + 0x18)) {
        lVar8 = *(long *)(param_1 + 0x2f0);
        if (uVar17 == uVar7) {
          if (lVar8 == 0) goto LAB_0733b520;
          lVar14 = System_Text_StringBuilder__Append(lVar8,*(undefined8 *)(param_1 + 0xf8),0);
          lVar8 = *(long *)(lVar10 + 0x38);
          if (lVar8 == 0) goto LAB_0733b520;
          if (*(uint *)(lVar8 + 0x18) <= uVar17) {
LAB_0733b940:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          if ((lVar14 == 0) ||
             (lVar8 = System_Text_StringBuilder__Append
                                (lVar14,*(undefined8 *)(lVar8 + uVar17 * 8 + 0x20),0),
             puVar11 = (undefined8 *)(param_1 + 0x100), lVar8 == 0)) goto LAB_0733b520;
        }
        else {
          if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_0733b940;
          if (lVar8 == 0) goto LAB_0733b520;
          puVar11 = (undefined8 *)(lVar14 + lVar19);
        }
        System_Text_StringBuilder__Append(lVar8,*puVar11,0);
        lVar14 = *(long *)(lVar10 + 0x38);
        uVar7 = uVar7 + 1;
        lVar19 = lVar19 + 8;
        if (lVar14 == 0) goto LAB_0733b520;
      }
    }
    if (*(long *)(param_1 + 0x270) == 0) goto LAB_0733b520;
    plVar9 = (long *)FUN_057e0998(*(long *)(param_1 + 0x270),iVar6,DAT_091b0d88);
    plVar12 = *(long **)(param_1 + 0x2f0);
    if ((plVar12 == (long *)0x0) ||
       (uVar16 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170)),
       plVar9 == (long *)0x0)) goto LAB_0733b520;
    (**(code **)(*plVar9 + 0x5e8))(plVar9,uVar16,*(undefined8 *)(*plVar9 + 0x5f0));
    iVar6 = iVar6 + 1;
  } while (iVar6 != iVar5);
LAB_0733b8a4:
  iVar13 = *(int *)(param_1 + 0x278);
  while( true ) {
    iVar13 = iVar13 + -1;
    if (iVar13 < iVar5) {
      *(int *)(param_1 + 0x278) = iVar5;
      return;
    }
    if (((*(long *)(param_1 + 0x270) == 0) ||
        (lVar10 = FUN_057e0998(*(long *)(param_1 + 0x270),iVar13,DAT_091b0d88), lVar10 == 0)) ||
       (lVar10 = UnityEngine_Component__get_gameObject(lVar10,0), lVar10 == 0)) break;
    UnityEngine_GameObject__SetActive(lVar10,0,0);
  }
  goto LAB_0733b520;
}

