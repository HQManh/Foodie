// rea decompile_all
// name: _GAME.Bridge.R1UserTextSupport$$ReverseArabicRuns
// address: 0x7767ff4
// body: available
// range: 0x7767ff4-0x77684a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77684a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Bridge_R1UserTextSupport__ReverseArabicRuns(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  
  if ((DAT_09522c7c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0588);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091b0610);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_09189998);
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_09522c7c = 1;
  }
  if (param_1 != 0) {
    uVar7 = *(undefined4 *)(param_1 + 0x10);
    plVar8 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
    System_Text_StringBuilder___ctor(plVar8,uVar7,0);
    lVar9 = thunk_FUN_03f9944c(DAT_0917cce8);
    FUN_057e0400(lVar9,DAT_091b0558);
    if (0 < *(int *)(param_1 + 0x10)) {
      iVar13 = 0;
      do {
        iVar5 = System_String__get_Chars(param_1,iVar13,0);
        if (*(int *)(DAT_09189998 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09189998);
        }
        if ((iVar5 - 0x700U >> 8 & 0xff) < 0xff) {
          if ((0x2f < (iVar5 - 0x750U & 0xffff)) &&
             ((0x2af < (iVar5 + 0x4b0U & 0xffff) && (0x8f < (iVar5 + 400U & 0xffff)))))
          goto LAB_077683c0;
LAB_07768184:
          sVar4 = System_String__get_Chars(param_1,iVar13,0);
          if (*(int *)(DAT_09189998 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09189998);
          }
          if ((((ushort)(sVar4 - 0x6d6U) < 0x18) || (sVar4 == 0x670)) ||
             ((ushort)(sVar4 - 0x64bU) < 0x15)) goto LAB_077683c0;
          if (lVar9 == 0) goto LAB_077684a0;
          iVar5 = *(int *)(lVar9 + 0x18);
          *(undefined4 *)(lVar9 + 0x18) = 0;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (0 < iVar5) {
            System_Array__Clear(*(undefined8 *)(lVar9 + 0x10),0,iVar5,0);
          }
          iVar5 = 0;
          iVar6 = iVar13;
          while (iVar13 = iVar6, iVar13 < *(int *)(param_1 + 0x10)) {
            iVar6 = System_String__get_Chars(param_1,iVar13,0);
            if (*(int *)(DAT_09189998 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09189998);
            }
            if ((iVar6 - 0x700U >> 8 & 0xff) < 0xff) {
              if ((0x2f < (iVar6 - 0x750U & 0xffff)) &&
                 ((0x2af < (iVar6 + 0x4b0U & 0xffff) && (0x8f < (iVar6 + 400U & 0xffff))))) {
LAB_077682a0:
                sVar4 = System_String__get_Chars(param_1,iVar13,0);
                if (sVar4 != 0x20) break;
              }
            }
            else if ((0xfff5 < (iVar6 - 0x66aU & 0xffff)) || (0xfff5 < (iVar6 - 0x6faU & 0xffff)))
            goto LAB_077682a0;
            iVar1 = 1;
            do {
              iVar11 = iVar1;
              iVar6 = iVar13 + iVar11;
              if (*(int *)(param_1 + 0x10) <= iVar6) break;
              sVar4 = System_String__get_Chars(param_1,iVar6,0);
              if (*(int *)(DAT_09189998 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09189998);
              }
              iVar1 = iVar11 + 1;
            } while ((((ushort)(sVar4 - 0x6d6U) < 0x18) || (sVar4 == 0x670)) ||
                    ((ushort)(sVar4 - 0x64bU) < 0x15));
            uVar10 = System_String__Substring(param_1,iVar13,iVar11,0);
            lVar3 = DAT_091b0570;
            lVar12 = *(long *)(lVar9 + 0x10);
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_077684a0;
            uVar2 = *(uint *)(lVar9 + 0x18);
            if (uVar2 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = uVar10;
              thunk_FUN_03f5d7b8();
            }
            else {
              FUN_057e0c68(lVar9,uVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
            }
            sVar4 = System_String__get_Chars(param_1,iVar13,0);
            if (sVar4 != 0x20) {
              iVar5 = *(int *)(lVar9 + 0x18);
              iVar6 = iVar13 + iVar11;
            }
          }
          iVar6 = iVar5;
          if (-1 < iVar5 + -1) {
            do {
              iVar6 = iVar6 + -1;
              uVar10 = FUN_057e0998(lVar9,iVar6,DAT_091b0610);
              if (plVar8 == (long *)0x0) goto LAB_077684a0;
              System_Text_StringBuilder__Append(plVar8,uVar10,0);
            } while (0 < iVar6);
          }
          iVar6 = *(int *)(lVar9 + 0x18);
          for (; iVar5 < iVar6; iVar5 = iVar5 + 1) {
            uVar10 = FUN_057e0998(lVar9,iVar5,DAT_091b0610);
            if (plVar8 == (long *)0x0) goto LAB_077684a0;
            System_Text_StringBuilder__Append(plVar8,uVar10,0);
            iVar6 = *(int *)(lVar9 + 0x18);
          }
        }
        else {
          if (((iVar5 - 0x66aU & 0xffff) < 0xfff6) && ((iVar5 - 0x6faU & 0xffff) < 0xfff6))
          goto LAB_07768184;
LAB_077683c0:
          uVar7 = System_String__get_Chars(param_1,iVar13,0);
          if (plVar8 == (long *)0x0) goto LAB_077684a0;
          iVar13 = iVar13 + 1;
          System_Text_StringBuilder__Append(plVar8,uVar7,0);
        }
      } while (iVar13 < *(int *)(param_1 + 0x10));
    }
    if (plVar8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0776849c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
      return;
    }
  }
LAB_077684a0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

