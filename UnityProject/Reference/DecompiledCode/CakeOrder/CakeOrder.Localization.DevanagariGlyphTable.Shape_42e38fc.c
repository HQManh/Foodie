// rea decompile_all
// name: CakeOrder.Localization.DevanagariGlyphTable$$Shape
// address: 0x42e38fc
// body: available
// range: 0x42e38fc-0x42e3bd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42e3b98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42e3bd0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_Localization_DevanagariGlyphTable__Shape(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  undefined1 auVar14 [16];
  ulong local_48;
  
  if ((DAT_0951744a & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fee0);
    FUN_03f5c2a4(&DAT_0919fea8);
    FUN_03f5c2a4(&DAT_0919ff00);
    FUN_03f5c2a4(&DAT_09176c28);
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_0951744a = 1;
  }
  local_48 = 0;
  auVar14 = CakeOrder_Localization_DevanagariGlyphTable__ContainsDevanagari(param_2);
  if ((auVar14._0_8_ & 1) == 0) {
    return param_2;
  }
  plVar10 = (long *)(param_1 + 0x28);
  if (*plVar10 == 0) {
    lVar7 = *(long *)(param_1 + 0x18);
    if (lVar7 != 0) {
      uVar6 = thunk_FUN_03f9944c(DAT_09176c28);
      FUN_06fd76d4(uVar6,*(undefined4 *)(lVar7 + 0x18),DAT_0919fea8);
      *(undefined8 *)(param_1 + 0x28) = uVar6;
      auVar14 = thunk_FUN_03f5d7b8(plVar10,uVar6);
      lVar7 = *(long *)(param_1 + 0x18);
      if (lVar7 != 0) {
        lVar13 = 4;
        do {
          uVar9 = lVar13 - 4;
          if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)uVar9) goto LAB_042e3984;
          lVar8 = *(long *)(param_1 + 0x20);
          if (lVar8 == 0) break;
          if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar9) goto LAB_042e3984;
          if ((*(uint *)(lVar7 + 0x18) <= uVar9) || (*(uint *)(lVar8 + 0x18) <= uVar9)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          auVar2._8_8_ = 0;
          auVar2._0_8_ = auVar14._8_8_;
          auVar14 = auVar2 << 0x40;
          if (*plVar10 == 0) break;
          auVar14 = FUN_06fd8440(*plVar10,*(undefined8 *)(lVar7 + lVar13 * 8),
                                 *(undefined8 *)(lVar8 + lVar13 * 8),DAT_0919ff00);
          lVar7 = *(long *)(param_1 + 0x18);
          lVar13 = lVar13 + 1;
        } while (lVar7 != 0);
      }
    }
  }
  else {
LAB_042e3984:
    if (param_2 != 0) {
      uVar1 = *(undefined4 *)(param_2 + 0x10);
      plVar4 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
      auVar14 = System_Text_StringBuilder___ctor(plVar4,uVar1,0);
      if (*(int *)(param_2 + 0x10) < 1) {
        if (plVar4 == (long *)0x0) goto LAB_042e3b98;
      }
      else {
        iVar11 = 0;
        do {
          uVar3 = System_String__get_Chars(param_2,iVar11,0);
          if ((((uVar3 & 0xff80) == 0x900) || ((uVar3 >> 5 & 0x7ff) == 0x547)) ||
             ((uVar3 & 0xfffe) == 0x200c)) {
            iVar12 = iVar11;
            if (iVar11 < *(int *)(param_2 + 0x10)) {
              do {
                uVar3 = System_String__get_Chars(param_2,iVar12,0);
                if ((((uVar3 & 0xff80) != 0x900) && ((uVar3 >> 5 & 0x7ff) != 0x547)) &&
                   ((uVar3 & 0xfffe) != 0x200c)) break;
                iVar12 = iVar12 + 1;
              } while (iVar12 < *(int *)(param_2 + 0x10));
            }
            auVar14 = System_String__Substring(param_2,iVar11,iVar12 - iVar11,0);
            if (*plVar10 == 0) goto LAB_042e3b98;
            uVar5 = FUN_06fd9fbc(*plVar10,auVar14._0_8_,&local_48,DAT_0919fee0);
            uVar9 = local_48;
            if ((uVar5 & 1) == 0) {
              uVar5 = CakeOrder_Localization_DevanagariGlyphTable__ReorderFallback(auVar14._0_8_);
              uVar9 = uVar5;
            }
            auVar14._8_8_ = uVar9;
            auVar14._0_8_ = uVar5;
            if (plVar4 == (long *)0x0) goto LAB_042e3b98;
            System_Text_StringBuilder__Append(plVar4,uVar9,0);
            iVar11 = iVar12 + -1;
          }
          else {
            auVar14 = System_String__get_Chars(param_2,iVar11,0);
            if (plVar4 == (long *)0x0) goto LAB_042e3b98;
            System_Text_StringBuilder__Append(plVar4,auVar14._0_8_ & 0xffffffff,0);
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(param_2 + 0x10));
      }
      lVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      return lVar7;
    }
  }
LAB_042e3b98:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(auVar14._0_8_,auVar14._8_8_);
}

