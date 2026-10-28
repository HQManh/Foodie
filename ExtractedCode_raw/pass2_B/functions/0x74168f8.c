// rea decompile_all
// name: Mono.Globalization.Unicode.MSCompatUnicodeTable$$.cctor
// address: 0x74168f8
// body: available
// range: 0x74168f8-0x7416cbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7416cac to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7416cb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7416cbc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Globalization_Unicode_MSCompatUnicodeTable___cctor(void)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  long lVar22;
  char *pcVar23;
  char *pcVar24;
  long lVar25;
  long lVar26;
  uint uVar27;
  long *plVar28;
  
  if ((DAT_09520f50 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_09187d38);
    FUN_03f5c2a4(&DAT_09188ac8);
    FUN_03f5c2a4(&DAT_09180680);
    FUN_03f5c2a4(&DAT_0918b8a0);
    FUN_03f5c2a4(&DAT_09218f00);
    FUN_03f5c2a4(&DAT_09218f08);
    DAT_09520f50 = 1;
  }
  uVar20 = DAT_09188ac8;
  **(undefined4 **)(DAT_09187d38 + 0xb8) = 3;
  uVar20 = thunk_FUN_03f9944c(uVar20);
  System_Object___ctor(uVar20,0);
  puVar21 = (undefined8 *)(*(long *)(DAT_09187d38 + 0xb8) + 0x88);
  *puVar21 = uVar20;
  thunk_FUN_03f5d7b8(puVar21,uVar20);
  lVar22 = Mono_Globalization_Unicode_MSCompatUnicodeTable__GetResource(DAT_09218f00);
  if (lVar22 != 0) {
    pcVar23 = (char *)System_IntPtr__op_Explicit(lVar22,0);
    lVar22 = Mono_Globalization_Unicode_MSCompatUnicodeTable__GetResource(DAT_09218f08);
    if ((((lVar22 != 0) &&
         (pcVar24 = (char *)System_IntPtr__op_Explicit(lVar22,0), pcVar23 != (char *)0x0)) &&
        (pcVar24 != (char *)0x0)) && ((*pcVar23 == '\x03' && (*pcVar24 == '\x03')))) {
      iVar18 = *(int *)(pcVar23 + 1);
      lVar22 = *(long *)(DAT_09187d38 + 0xb8);
      *(char **)(lVar22 + 8) = pcVar23 + 5;
      iVar17 = Mono_Globalization_Unicode_MSCompatUnicodeTable__UInt32FromBytePtr
                         (pcVar23,iVar18 + 5);
      uVar19 = iVar18 + 9;
      iVar17 = iVar17 + uVar19;
      *(char **)(lVar22 + 0x10) = pcVar23 + uVar19;
      iVar18 = Mono_Globalization_Unicode_MSCompatUnicodeTable__UInt32FromBytePtr(pcVar23,iVar17);
      uVar19 = iVar17 + 4;
      iVar18 = iVar18 + uVar19;
      *(char **)(lVar22 + 0x18) = pcVar23 + uVar19;
      iVar17 = Mono_Globalization_Unicode_MSCompatUnicodeTable__UInt32FromBytePtr(pcVar23,iVar18);
      *(char **)(lVar22 + 0x20) = pcVar23 + (iVar18 + 4);
      *(char **)(lVar22 + 0x28) = pcVar23 + (iVar18 + iVar17 + 8);
      uVar19 = *(uint *)(pcVar24 + 1);
      uVar20 = FUN_03f5c394(DAT_09180680,(ulong)uVar19);
      puVar21 = (undefined8 *)(*(long *)(DAT_09187d38 + 0xb8) + 0x80);
      *puVar21 = uVar20;
      thunk_FUN_03f5d7b8(puVar21,uVar20);
      if (uVar19 == 0) {
        iVar17 = 5;
      }
      else {
        lVar22 = 0;
        uVar27 = 0;
        iVar18 = 8;
        do {
          iVar17 = iVar18;
          cVar4 = pcVar24[iVar17 - 3];
          cVar5 = pcVar24[iVar17 + -2];
          cVar6 = pcVar24[iVar17 + -1];
          cVar7 = pcVar24[iVar17 + 1];
          cVar8 = pcVar24[iVar17];
          cVar9 = pcVar24[iVar17 + 2];
          cVar10 = pcVar24[iVar17 + 5];
          cVar11 = pcVar24[iVar17 + 6];
          cVar12 = pcVar24[iVar17 + 3];
          cVar13 = pcVar24[iVar17 + 9];
          cVar14 = pcVar24[iVar17 + 7];
          cVar15 = pcVar24[iVar17 + 4];
          cVar16 = pcVar24[iVar17 + 8];
          lVar25 = thunk_FUN_03f9944c(DAT_0918b8a0);
          System_Object___ctor(lVar25,0);
          lVar26 = DAT_09187d38;
          *(uint *)(lVar25 + 0x10) = CONCAT13(cVar8,CONCAT12(cVar6,CONCAT11(cVar5,cVar4)));
          *(uint *)(lVar25 + 0x14) = CONCAT13(cVar15,CONCAT12(cVar12,CONCAT11(cVar9,cVar7)));
          *(uint *)(lVar25 + 0x18) = CONCAT13(cVar16,CONCAT12(cVar14,CONCAT11(cVar11,cVar10)));
          lVar26 = *(long *)(lVar26 + 0xb8);
          *(bool *)(lVar25 + 0x1c) = cVar13 != '\0';
          plVar28 = *(long **)(lVar26 + 0x80);
          if (plVar28 == (long *)0x0) goto LAB_07416cb0;
          lVar26 = thunk_FUN_03f99350(lVar25,*(undefined8 *)(*plVar28 + 0x40));
          if (lVar26 == 0) {
            uVar20 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar20,0);
          }
          if (*(uint *)(plVar28 + 3) <= uVar27) goto LAB_07416cac;
          plVar28[lVar22 + 4] = lVar25;
          thunk_FUN_03f5d7b8(plVar28 + lVar22 + 4,lVar25);
          uVar27 = uVar27 + 1;
          lVar22 = (long)(int)uVar27;
          iVar18 = iVar17 + 0xd;
        } while (lVar22 < (long)(ulong)uVar19);
        iVar17 = iVar17 + 10;
      }
      uVar19 = Mono_Globalization_Unicode_MSCompatUnicodeTable__UInt32FromBytePtr
                         (pcVar24,iVar17 + 2);
      uVar20 = FUN_03f5c394(DAT_0917fcc8,uVar19);
      puVar21 = (undefined8 *)(*(long *)(DAT_09187d38 + 0xb8) + 0x78);
      *puVar21 = uVar20;
      thunk_FUN_03f5d7b8(puVar21,uVar20);
      lVar22 = *(long *)(DAT_09187d38 + 0xb8);
      if (uVar19 != 0) {
        lVar26 = *(long *)(lVar22 + 0x78);
        if (lVar26 == 0) {
LAB_07416cb0:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar3 = *(int *)(lVar26 + 0x18);
        lVar25 = 0;
        iVar18 = 0;
        uVar27 = iVar17 + 6;
        do {
          if (iVar3 == iVar18) {
LAB_07416cac:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          iVar17 = uVar27 + 1;
          uVar2 = (ulong)uVar27;
          iVar18 = iVar18 + 1;
          lVar1 = lVar25 * 2;
          lVar25 = (long)iVar18;
          uVar27 = uVar27 + 2;
          *(ushort *)(lVar26 + lVar1 + 0x20) = CONCAT11(pcVar24[iVar17],pcVar24[uVar2]);
        } while (lVar25 < (long)(ulong)uVar19);
      }
      *(undefined1 *)(lVar22 + 0x90) = 1;
    }
  }
  return;
}

