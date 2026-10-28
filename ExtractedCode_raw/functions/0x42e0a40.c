// rea decompile_all
// name: CakeOrder.Localization.ArabicShaper$$ProcessLine
// address: 0x42e0a40
// body: available
// range: 0x42e0a40-0x42e0fe7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42e0f9c to 0x42e16ec CakeOrder.Localization.ArabicShaper$$ProcessRuns (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42e0fdc to 0x42e11d0 CakeOrder.Localization.ArabicShaper$$AppendReversed (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42e0fe0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42e0fe4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Localization_ArabicShaper__ProcessLine
               (long param_1,int param_2,int param_3,long param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  char cVar13;
  ulong uVar14;
  ulong uVar15;
  char *pcVar16;
  long lVar17;
  uint uVar18;
  
  if ((DAT_09517435 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181520);
    FUN_03f5c2a4(&DAT_091c0570);
    FUN_03f5c2a4(&DAT_09180920);
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_09517435 = 1;
  }
  uVar2 = param_3 - param_2;
  if ((int)uVar2 < 1) {
    return;
  }
  lVar11 = FUN_03f5c394(DAT_09180920,uVar2);
  if (param_1 != 0) {
    uVar18 = 0;
    do {
      iVar9 = uVar18 + param_2;
      uVar7 = System_String__get_Chars(param_1,iVar9,0);
      if (((((uVar7 & 0xffff) == 0x3c) &&
           (iVar8 = System_String__IndexOf(param_1,0x3e,iVar9,0), 0 < iVar8)) && (iVar8 < param_3))
         && (iVar8 - iVar9 < 0x41)) {
        uVar7 = iVar8 - param_2;
        if ((int)uVar18 <= (int)uVar7) {
          if (lVar11 == 0) goto LAB_042e0fe4;
          do {
            if (*(uint *)(lVar11 + 0x18) <= uVar18) goto LAB_042e0fe0;
            lVar17 = (long)(int)uVar18;
            uVar18 = uVar18 + 1;
            *(undefined1 *)(lVar11 + lVar17 + 0x20) = 4;
          } while ((int)uVar18 <= (int)uVar7);
        }
      }
      else {
        if (*(int *)(DAT_09181520 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = CakeOrder_Localization_ArabicShaper__Classify(uVar7);
        if (lVar11 == 0) goto LAB_042e0fe4;
        if (*(uint *)(lVar11 + 0x18) <= uVar18) goto LAB_042e0fe0;
        *(undefined1 *)(lVar11 + (int)uVar18 + 0x20) = uVar4;
        uVar7 = uVar18;
      }
      uVar18 = uVar7 + 1;
    } while ((int)uVar18 < (int)uVar2);
    if (((param_5 & 1) == 0) && (iVar9 = FUN_04ee560c(lVar11,0,DAT_091c0570), iVar9 < 0)) {
      if (*(int *)(DAT_09181520 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      CakeOrder_Localization_ArabicShaper__AppendReversed(param_1,param_2,param_3,param_4);
      return;
    }
    if (lVar11 != 0) {
      uVar7 = *(uint *)(lVar11 + 0x18);
      uVar14 = 0;
      bVar3 = false;
      uVar18 = uVar2;
      if (uVar2 - 1 == 0 || (int)uVar2 < 1) {
        uVar18 = 1;
      }
      do {
        if (uVar7 <= uVar14) goto LAB_042e0fe0;
        cVar5 = *(char *)(lVar11 + uVar14 + 0x20);
        if (cVar5 == '\0') {
          bVar3 = false;
        }
        else if (cVar5 == '\x01') {
          bVar3 = true;
        }
        else if ((cVar5 == '\x02') && (bVar3)) {
          *(undefined1 *)(lVar11 + uVar14 + 0x20) = 1;
        }
        uVar14 = uVar14 + 1;
      } while (uVar18 != uVar14);
      if (2 < (int)uVar2) {
        uVar14 = 0;
        lVar17 = lVar11 + 0x20;
        do {
          uVar12 = System_String__get_Chars(param_1,param_2 + 1 + (int)uVar14,0);
          uVar15 = (ulong)*(uint *)(lVar11 + 0x18);
          if (uVar15 <= uVar14 + 1) goto LAB_042e0fe0;
          if (((*(char *)(lVar17 + uVar14 + 1) == '\x03') && (((uint)uVar12 & 0xffff) < 0x3b)) &&
             ((1L << (uVar12 & 0x3f) & 0x400d00000000000U) != 0)) {
            if (uVar15 <= uVar14) goto LAB_042e0fe0;
            if (*(char *)(lVar17 + uVar14) == '\x02') {
              if (uVar15 <= uVar14 + 2) goto LAB_042e0fe0;
              if (*(char *)(lVar17 + uVar14 + 2) == '\x02') {
                *(undefined1 *)(lVar17 + uVar14 + 1) = 2;
              }
            }
          }
          uVar14 = uVar14 + 1;
        } while ((ulong)(uVar2 - 1) - 1 != uVar14);
      }
      if (uVar2 != 1) {
        uVar14 = 0;
        uVar18 = uVar2;
        if ((int)uVar2 < 3) {
          uVar18 = 2;
        }
        do {
          if ((ulong)*(uint *)(lVar11 + 0x18) <= uVar14 + 1) goto LAB_042e0fe0;
          if ((*(char *)(lVar11 + uVar14 + 0x21) == '\x03') &&
             (sVar6 = System_String__get_Chars(param_1,param_2 + 1 + (int)uVar14,0), sVar6 == 0x25))
          {
            if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_042e0fe0;
            if (*(char *)(lVar11 + uVar14 + 0x20) == '\x02') {
              if ((ulong)*(uint *)(lVar11 + 0x18) <= uVar14 + 1) goto LAB_042e0fe0;
              *(undefined1 *)(lVar11 + uVar14 + 0x21) = 2;
            }
          }
          uVar14 = uVar14 + 1;
        } while ((ulong)uVar18 - 1 != uVar14);
      }
      uVar18 = 0;
      do {
        uVar7 = *(uint *)(lVar11 + 0x18);
        if (uVar7 <= uVar18) {
LAB_042e0fe0:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (*(char *)(lVar11 + (int)uVar18 + 0x20) == '\x03') {
          if ((int)uVar18 < (int)uVar2) {
            uVar14 = (ulong)(int)uVar18;
            uVar1 = uVar18;
            if (uVar18 <= uVar7) {
              uVar1 = uVar7;
            }
            do {
              if (uVar1 == (uint)uVar14) goto LAB_042e0fe0;
              uVar7 = *(byte *)(lVar11 + 0x20 + uVar14) - 5;
              bVar3 = uVar7 < 0xfffffffe;
              if (uVar7 < 0xfffffffe) goto LAB_042e0df8;
              uVar14 = uVar14 + 1;
            } while ((int)uVar14 < (int)uVar2);
            uVar14 = (ulong)uVar2;
          }
          else {
            bVar3 = false;
            uVar14 = (ulong)uVar18;
          }
LAB_042e0df8:
          if (*(int *)(DAT_09181520 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          cVar5 = CakeOrder_Localization_ArabicShaper__PrevStrong(lVar11,uVar18);
          uVar7 = (uint)uVar14;
          if (bVar3) {
            if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_042e0fe0;
            cVar13 = *(char *)(lVar11 + (int)uVar7 + 0x20);
          }
          else {
            cVar13 = '\0';
          }
          if ((int)uVar18 < (int)uVar7) {
            pcVar16 = (char *)(lVar11 + 0x20 + (long)(int)uVar18);
            lVar17 = (long)(int)uVar7 - (long)(int)uVar18;
            do {
              if (*(uint *)(lVar11 + 0x18) <= uVar18) goto LAB_042e0fe0;
              if (*pcVar16 == '\x03') {
                *pcVar16 = cVar5 == '\x01' && cVar13 == '\x01';
              }
              lVar17 = lVar17 + -1;
              pcVar16 = pcVar16 + 1;
              uVar18 = uVar18 + 1;
            } while (lVar17 != 0);
          }
          uVar18 = uVar7 - 1;
        }
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < (int)uVar2);
      if ((param_5 & 1) == 0) {
        if (*(int *)(DAT_09181520 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        CakeOrder_Localization_ArabicShaper__ProcessRuns(param_1,param_2,uVar2,lVar11,param_4);
        return;
      }
      lVar17 = thunk_FUN_03f9944c(DAT_0918b348);
      System_Text_StringBuilder___ctor(lVar17,0);
      if (*(int *)(DAT_09181520 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      CakeOrder_Localization_ArabicShaper__ProcessRuns(param_1,param_2,uVar2,lVar11,lVar17);
      if (lVar17 != 0) {
        iVar9 = System_Text_StringBuilder__get_Length(lVar17,0);
        if (iVar9 + -1 < 0) {
          return;
        }
        while( true ) {
          iVar9 = iVar9 + -1;
          uVar10 = System_Text_StringBuilder__get_Chars(lVar17,iVar9,0);
          if (param_4 == 0) break;
          System_Text_StringBuilder__Append(param_4,uVar10,0);
          if (iVar9 < 1) {
            return;
          }
        }
      }
    }
  }
LAB_042e0fe4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

