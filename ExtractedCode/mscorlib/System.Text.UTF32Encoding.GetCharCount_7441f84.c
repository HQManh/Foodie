// rea decompile_all
// name: System.Text.UTF32Encoding$$GetCharCount
// address: 0x7441f84
// body: available
// range: 0x7441f84-0x74422c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x744225c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7442260 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74422bc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74422c4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Text_UTF32Encoding__GetCharCount(long param_1,byte *param_2,int param_3,long *param_4)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  undefined1 uVar3;
  
  if ((DAT_09521082 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09195870);
    DAT_09521082 = 1;
  }
  if (param_4 == (long *)0x0) {
    plVar6 = *(long **)(param_1 + 0x30);
    if (plVar6 == (long *)0x0) goto LAB_07442260;
    plVar6 = (long *)(**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (*param_4 != DAT_09195870) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_4);
    }
    uVar14 = *(uint *)(param_4 + 6);
    uVar13 = *(uint *)((long)param_4 + 0x34);
    plVar6 = (long *)System_Text_Decoder__get_FallbackBuffer(param_4,0);
  }
  if (plVar6 == (long *)0x0) goto LAB_07442260;
  pbVar15 = param_2 + param_3;
  System_Text_DecoderFallbackBuffer__InternalInitialize(plVar6,param_2,0,0);
  iVar12 = 0;
  while ((param_2 < pbVar15 && (-1 < iVar12))) {
    cVar1 = *(char *)(param_1 + 0x3a);
    if (cVar1 == '\0') {
      uVar14 = (uint)(CONCAT14(*param_2,uVar14) >> 8);
    }
    else {
      uVar14 = (uint)*param_2 | uVar14 << 8;
    }
    uVar13 = uVar13 + 1;
    param_2 = param_2 + 1;
    if (3 < (int)uVar13) {
      if ((uVar14 >> 0x10 < 0x11) && ((uVar14 & 0x1ff800) != 0xd800)) {
        uVar4 = uVar14 & 0xffff0000;
        uVar13 = 0;
        uVar14 = 0;
        if (uVar4 != 0) {
          iVar12 = iVar12 + 1;
        }
        iVar12 = iVar12 + 1;
      }
      else {
        lVar7 = FUN_03f5c394(DAT_0917fc88,4);
        uVar2 = (undefined1)(uVar14 >> 0x10);
        uVar3 = (undefined1)(uVar14 >> 8);
        if (cVar1 == '\0') {
          if (lVar7 == 0) goto LAB_07442260;
          uVar13 = *(uint *)(lVar7 + 0x18);
          if ((((uVar13 == 0) || (*(char *)(lVar7 + 0x20) = (char)uVar14, uVar13 == 1)) ||
              (*(undefined1 *)(lVar7 + 0x21) = uVar3, uVar13 < 3)) ||
             (*(undefined1 *)(lVar7 + 0x22) = uVar2, uVar13 == 3)) goto LAB_0744225c;
          uVar14 = uVar14 >> 0x18;
        }
        else {
          if (lVar7 == 0) goto LAB_07442260;
          uVar13 = *(uint *)(lVar7 + 0x18);
          if (((uVar13 == 0) || (*(char *)(lVar7 + 0x20) = (char)(uVar14 >> 0x18), uVar13 == 1)) ||
             ((*(undefined1 *)(lVar7 + 0x21) = uVar2, uVar13 < 3 ||
              (*(undefined1 *)(lVar7 + 0x22) = uVar3, uVar13 == 3)))) goto LAB_0744225c;
        }
        *(char *)(lVar7 + 0x23) = (char)uVar14;
        iVar5 = (**(code **)(*plVar6 + 0x1c8))
                          (plVar6,lVar7,param_2,*(undefined8 *)(*plVar6 + 0x1d0));
        uVar14 = 0;
        uVar13 = 0;
        iVar12 = iVar5 + iVar12;
      }
    }
  }
  if ((0 < (int)uVar13) && ((param_4 == (long *)0x0 || ((char)param_4[5] != '\0')))) {
    iVar5 = uVar13 + 1;
    lVar7 = FUN_03f5c394(DAT_0917fc88,uVar13);
    if (*(char *)(param_1 + 0x3a) == '\0') {
      if (lVar7 == 0) goto LAB_07442260;
      uVar4 = *(uint *)(lVar7 + 0x18);
      uVar11 = (ulong)uVar13;
      do {
        uVar11 = uVar11 - 1;
        if (uVar4 <= iVar5 - 2U) goto LAB_0744225c;
        iVar5 = iVar5 + -1;
        *(char *)(lVar7 + (uVar11 & 0xffffffff) + 0x20) = (char)(uVar14 >> 0x18);
        uVar14 = uVar14 << 8;
      } while (1 < iVar5);
    }
    else {
      if (lVar7 == 0) {
LAB_07442260:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = *(uint *)(lVar7 + 0x18);
      uVar11 = (ulong)uVar13;
      do {
        uVar11 = uVar11 - 1;
        if (uVar4 <= iVar5 - 2U) {
LAB_0744225c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        iVar5 = iVar5 + -1;
        *(char *)(lVar7 + (uVar11 & 0xffffffff) + 0x20) = (char)uVar14;
        uVar14 = uVar14 >> 8;
      } while (1 < iVar5);
    }
    iVar5 = (**(code **)(*plVar6 + 0x1c8))(plVar6,lVar7,param_2,*(undefined8 *)(*plVar6 + 0x1d0));
    iVar12 = iVar5 + iVar12;
  }
  if (-1 < iVar12) {
    return iVar12;
  }
  thunk_FUN_03fc39d4(&DAT_09181558);
  uVar8 = thunk_FUN_03f9944c();
  uVar9 = thunk_FUN_03fc39d4(&DAT_09219b28);
  uVar10 = thunk_FUN_03fc39d4(&DAT_09210b08);
  System_ArgumentOutOfRangeException___ctor(uVar8,uVar9,uVar10,0);
  uVar9 = thunk_FUN_03fc39d4(&DAT_091dd890);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar8,uVar9);
}

