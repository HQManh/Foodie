// rea decompile_all
// name: Mono.Globalization.Unicode.SortKeyBuffer$$GetResult
// address: 0x741d54c
// body: available
// range: 0x741d54c-0x741da27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x741da20 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x741da24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Mono_Globalization_Unicode_SortKeyBuffer__GetResult(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  lVar6 = param_1;
  if ((DAT_09520f6f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c06d0);
    FUN_03f5c2a4(&DAT_0917fc88);
    lVar6 = FUN_03f5c2a4(&DAT_0918ae78);
    DAT_09520f6f = 1;
  }
  lVar14 = *(long *)(param_1 + 0x50);
  if (lVar14 == 0) {
LAB_0741da24:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(lVar14 + 0x10) == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x78);
    lVar6 = FUN_03f5c394(DAT_0917fc88,0);
    uVar3 = *(undefined4 *)(param_1 + 0x7c);
    uVar7 = thunk_FUN_03f9944c(DAT_0918ae78);
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar20 = 0;
    uVar19 = 0;
    uVar18 = 0;
    uVar17 = 0;
    uVar16 = 0;
LAB_0741d9f8:
    System_Globalization_SortKey___ctor
              (uVar7,uVar2,lVar14,lVar6,uVar3,uVar10,uVar11,uVar12,uVar16,uVar17,uVar18,uVar19,
               uVar20,0);
    return uVar7;
  }
  if ((*(char *)(param_1 + 0x81) != '\0') && (*(char *)(param_1 + 0x82) == '\0')) {
    lVar14 = *(long *)(param_1 + 0x18);
    lVar6 = 0;
    if (lVar14 != 0) {
      uVar8 = *(ulong *)(lVar14 + 0x18);
      if ((int)uVar8 < 1) {
        uVar8 = 0;
      }
      else {
        uVar13 = 0;
        do {
          if (*(char *)(lVar14 + 0x20 + uVar13) == '\0') {
            uVar8 = uVar13 & 0xffffffff;
            break;
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar8 != (int)uVar13);
      }
      lVar6 = FUN_04939bc0(lVar14,0,uVar8,DAT_091c06d0);
      *(undefined1 *)(param_1 + 0x82) = 1;
    }
  }
  uVar7 = Mono_Globalization_Unicode_SortKeyBuffer__GetOptimizedLength
                    (lVar6,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x5c),2);
  *(int *)(param_1 + 0x5c) = (int)uVar7;
  uVar7 = Mono_Globalization_Unicode_SortKeyBuffer__GetOptimizedLength
                    (uVar7,*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x60),2);
  iVar4 = *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x60) = (int)uVar7;
  uVar7 = Mono_Globalization_Unicode_SortKeyBuffer__GetOptimizedLength
                    (uVar7,*(undefined8 *)(param_1 + 0x28),iVar4,0xe4);
  *(int *)(param_1 + 100) = (int)uVar7;
  uVar7 = Mono_Globalization_Unicode_SortKeyBuffer__GetOptimizedLength
                    (uVar7,*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x68),3);
  *(int *)(param_1 + 0x68) = (int)uVar7;
  uVar7 = Mono_Globalization_Unicode_SortKeyBuffer__GetOptimizedLength
                    (uVar7,*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x6c),0xe4);
  *(int *)(param_1 + 0x6c) = (int)uVar7;
  uVar7 = Mono_Globalization_Unicode_SortKeyBuffer__GetOptimizedLength
                    (uVar7,*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x70),0xe4);
  *(int *)(param_1 + 0x70) = (int)uVar7;
  iVar5 = Mono_Globalization_Unicode_SortKeyBuffer__GetOptimizedLength
                    (uVar7,*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x74),2);
  *(int *)(param_1 + 0x74) = iVar5;
  iVar9 = 0;
  if (0 < iVar4) {
    iVar9 = (int)*(undefined8 *)(param_1 + 100) +
            (int)((ulong)*(undefined8 *)(param_1 + 100) >> 0x20) +
            (int)*(undefined8 *)(param_1 + 0x6c) +
            (int)((ulong)*(undefined8 *)(param_1 + 0x6c) >> 0x20) + 4;
  }
  lVar6 = FUN_03f5c394(DAT_0917fc88,
                       iVar5 + *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x5c) +
                       *(int *)(param_1 + 0x60) + iVar9 + 5);
  System_Array__Copy(*(undefined8 *)(param_1 + 0x10),lVar6,*(undefined4 *)(param_1 + 0x58),0);
  if (lVar6 == 0) goto LAB_0741da24;
  if (*(uint *)(param_1 + 0x58) < *(uint *)(lVar6 + 0x18)) {
    *(undefined1 *)(lVar6 + (int)*(uint *)(param_1 + 0x58) + 0x20) = 1;
    iVar5 = *(int *)(param_1 + 0x5c);
    iVar9 = *(int *)(param_1 + 0x58) + 1;
    if (0 < iVar5) {
      System_Array__Copy(*(undefined8 *)(param_1 + 0x18),0,lVar6,iVar9,iVar5,0);
      iVar5 = *(int *)(param_1 + 0x5c);
    }
    uVar1 = iVar5 + iVar9;
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(undefined1 *)(lVar6 + (int)uVar1 + 0x20) = 1;
      iVar9 = *(int *)(param_1 + 0x60);
      if (0 < iVar9) {
        System_Array__Copy(*(undefined8 *)(param_1 + 0x20),0,lVar6,uVar1 + 1,iVar9,0);
        iVar9 = *(int *)(param_1 + 0x60);
      }
      uVar1 = iVar9 + uVar1 + 1;
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        uVar15 = uVar1 + 1;
        *(undefined1 *)(lVar6 + (int)uVar1 + 0x20) = 1;
        if (0 < iVar4) {
          System_Array__Copy(*(undefined8 *)(param_1 + 0x28),0,lVar6,uVar15,
                             *(undefined4 *)(param_1 + 100),0);
          uVar15 = *(int *)(param_1 + 100) + uVar15;
          if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_0741da20;
          *(undefined1 *)(lVar6 + (int)uVar15 + 0x20) = 0xff;
          System_Array__Copy(*(undefined8 *)(param_1 + 0x30),0,lVar6,uVar15 + 1,
                             *(undefined4 *)(param_1 + 0x68),0);
          uVar1 = *(int *)(param_1 + 0x68) + uVar15 + 1;
          if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_0741da20;
          *(undefined1 *)(lVar6 + (int)uVar1 + 0x20) = 2;
          System_Array__Copy(*(undefined8 *)(param_1 + 0x38),0,lVar6,uVar1 + 1,
                             *(undefined4 *)(param_1 + 0x6c),0);
          uVar1 = *(int *)(param_1 + 0x6c) + uVar1 + 1;
          if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_0741da20;
          *(undefined1 *)(lVar6 + (int)uVar1 + 0x20) = 0xff;
          System_Array__Copy(*(undefined8 *)(param_1 + 0x40),0,lVar6,uVar1 + 1,
                             *(undefined4 *)(param_1 + 0x70),0);
          uVar1 = *(int *)(param_1 + 0x70) + uVar1 + 1;
          if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_0741da20;
          uVar15 = uVar1 + 1;
          *(undefined1 *)(lVar6 + (int)uVar1 + 0x20) = 0xff;
        }
        if (uVar15 < *(uint *)(lVar6 + 0x18)) {
          *(undefined1 *)(lVar6 + (int)uVar15 + 0x20) = 1;
          iVar9 = *(int *)(param_1 + 0x74);
          if (0 < iVar9) {
            System_Array__Copy(*(undefined8 *)(param_1 + 0x48),0,lVar6,uVar15 + 1,iVar9,0);
            iVar9 = *(int *)(param_1 + 0x74);
          }
          uVar1 = iVar9 + uVar15 + 1;
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(undefined1 *)(lVar6 + (int)uVar1 + 0x20) = 0;
            lVar14 = *(long *)(param_1 + 0x50);
            uVar2 = *(undefined4 *)(param_1 + 0x78);
            uVar3 = *(undefined4 *)(param_1 + 0x7c);
            uVar12 = *(undefined4 *)(param_1 + 0x60);
            uVar16 = *(undefined4 *)(param_1 + 100);
            uVar10 = *(undefined4 *)(param_1 + 0x58);
            uVar11 = *(undefined4 *)(param_1 + 0x5c);
            uVar17 = *(undefined4 *)(param_1 + 0x68);
            uVar18 = *(undefined4 *)(param_1 + 0x6c);
            uVar19 = *(undefined4 *)(param_1 + 0x70);
            uVar20 = *(undefined4 *)(param_1 + 0x74);
            uVar7 = thunk_FUN_03f9944c(DAT_0918ae78);
            goto LAB_0741d9f8;
          }
        }
      }
    }
  }
LAB_0741da20:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

