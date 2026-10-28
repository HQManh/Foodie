// rea decompile_all
// name: CakeOrder.Localization.ArabicShaper$$AppendReversed
// address: 0x42e11d0
// body: available
// range: 0x42e11d0-0x42e1697 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42e1690 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42e1694 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Localization_ArabicShaper__AppendReversed
               (long param_1,int param_2,int param_3,long param_4)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined1 auVar13 [16];
  undefined2 local_64 [2];
  
  if ((DAT_09517437 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091b0610);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_091bb1b8);
    FUN_03f5c2a4(&DAT_091bb1c0);
    FUN_03f5c2a4(&DAT_091bb198);
    FUN_03f5c2a4(&DAT_091bb1c8);
    FUN_03f5c2a4(&DAT_0917e8c8);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091fac40);
    DAT_09517437 = 1;
  }
  local_64[0] = 0;
  lVar6 = thunk_FUN_03f9944c(DAT_0917cce8);
  auVar13 = FUN_057e0400(lVar6,DAT_091b0558);
  if (param_2 < param_3) {
    if (param_1 == 0) goto LAB_042e1690;
    do {
      sVar2 = System_String__get_Chars(param_1,param_2,0);
      if (((sVar2 == 0x3c) && (iVar3 = System_String__IndexOf(param_1,0x3e,param_2,0), 0 < iVar3))
         && (iVar3 < param_3)) {
        iVar9 = (iVar3 - param_2) + 1;
LAB_042e138c:
        auVar13 = System_String__Substring(param_1,param_2,iVar9,0);
        lVar7 = DAT_091b0570;
        if (lVar6 == 0) goto LAB_042e1690;
        lVar10 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_042e1690;
        uVar5 = *(uint *)(lVar6 + 0x18);
        param_2 = iVar3;
        if (uVar5 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar5 + 1;
          *(long *)(lVar10 + (long)(int)uVar5 * 8 + 0x20) = auVar13._0_8_;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(lVar6,auVar13._0_8_,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
      }
      else {
        uVar4 = System_String__get_Chars(param_1,param_2,0);
        if (*(int *)(DAT_09535460 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09535460);
        }
        uVar11 = System_Char__IsHighSurrogate(uVar4,0);
        if (((uVar11 & 1) != 0) && (iVar3 = param_2 + 1, iVar3 < param_3)) {
          iVar9 = 2;
          goto LAB_042e138c;
        }
        local_64[0] = System_String__get_Chars(param_1,param_2,0);
        if (*(int *)(DAT_09535460 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09535460);
        }
        auVar13 = System_Char__ToString(local_64,0);
        lVar7 = DAT_091b0570;
        if (lVar6 == 0) goto LAB_042e1690;
        lVar10 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_042e1690;
        uVar5 = *(uint *)(lVar6 + 0x18);
        if (uVar5 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar5 + 1;
          *(long *)(lVar10 + (long)(int)uVar5 * 8 + 0x20) = auVar13._0_8_;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(lVar6,auVar13._0_8_,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
      }
      param_2 = param_2 + 1;
    } while (param_2 < param_3);
  }
  else if (lVar6 == 0) goto LAB_042e1690;
  lVar7 = FUN_03f5c394(DAT_091805f8,*(undefined4 *)(lVar6 + 0x18));
  lVar10 = thunk_FUN_03f9944c(DAT_0917e8c8);
  auVar13 = FUN_0619f648(lVar10,DAT_091bb198);
  iVar3 = *(int *)(lVar6 + 0x18);
  if (0 < iVar3) {
    uVar11 = 0;
    puVar12 = (undefined8 *)(lVar7 + 0x20);
    do {
      auVar13 = FUN_057e0998(lVar6,uVar11 & 0xffffffff,DAT_091b0610);
      lVar8 = auVar13._0_8_;
      if (lVar8 == 0) goto LAB_042e1690;
      if ((2 < *(int *)(lVar8 + 0x10)) &&
         (auVar13 = System_String__get_Chars(lVar8,0,0), (auVar13._0_4_ & 0xffff) == 0x3c)) {
        auVar13 = System_String__get_Chars(lVar8,1,0);
        if ((auVar13._0_4_ & 0xffff) == 0x2f) {
          if (lVar10 == 0) goto LAB_042e1690;
          if (*(int *)(lVar10 + 0x18) != 0) {
            uVar5 = FUN_0619fca8(lVar10,DAT_091bb1b8);
            auVar13 = FUN_057e0998(lVar6,uVar5,DAT_091b0610);
            if (lVar7 == 0) goto LAB_042e1690;
            if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_042e1694;
            *puVar12 = auVar13._0_8_;
            thunk_FUN_03f5d7b8(puVar12,auVar13._0_8_);
            if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_042e1694;
            *(long *)(lVar7 + (long)(int)uVar5 * 8 + 0x20) = lVar8;
            auVar13 = thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x20) + (int)uVar5,lVar8);
          }
        }
        else {
          auVar13 = System_String__StartsWith(lVar8,DAT_091fac40,0);
          if ((auVar13._0_8_ & 1) == 0) {
            if (lVar10 == 0) goto LAB_042e1690;
            auVar13 = FUN_0619fd48(lVar10,uVar11 & 0xffffffff,DAT_091bb1c0);
          }
        }
      }
      iVar3 = *(int *)(lVar6 + 0x18);
      uVar11 = uVar11 + 1;
      puVar12 = puVar12 + 1;
    } while ((long)uVar11 < (long)iVar3);
  }
  lVar10 = auVar13._0_8_;
  if (-1 < (int)(iVar3 - 1U)) {
    if (lVar7 == 0) {
LAB_042e1690:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(auVar13._0_8_,auVar13._8_8_);
    }
    uVar11 = (ulong)(iVar3 - 1U);
    do {
      if (*(uint *)(lVar7 + 0x18) <= uVar11) {
LAB_042e1694:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar8 = *(long *)(lVar7 + 0x20 + uVar11 * 8);
      if (lVar8 == 0) {
        lVar10 = FUN_057e0998(lVar6,uVar11 & 0xffffffff,DAT_091b0610);
        lVar8 = lVar10;
      }
      auVar13._8_8_ = lVar8;
      auVar13._0_8_ = lVar10;
      if (param_4 == 0) goto LAB_042e1690;
      lVar10 = System_Text_StringBuilder__Append(param_4,lVar8,0);
      bVar1 = 0 < (long)uVar11;
      uVar11 = uVar11 - 1;
    } while (bVar1);
  }
  return;
}

