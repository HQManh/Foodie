// rea decompile_all
// name: System.Text.UTF7Encoding$$MakeTables
// address: 0x7442f2c
// body: available
// range: 0x7442f2c-0x74431bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74431b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74431bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_UTF7Encoding__MakeTables(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  
  if ((DAT_0952108a & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc40);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_091804c8);
    FUN_03f5c2a4(&DAT_091fb0c8);
    FUN_03f5c2a4(&DAT_091f5840);
    FUN_03f5c2a4(&DAT_091f6d10);
    DAT_0952108a = 1;
  }
  lVar4 = FUN_03f5c394(DAT_0917fc88,0x40);
  plVar6 = (long *)(param_1 + 0x38);
  *plVar6 = lVar4;
  thunk_FUN_03f5d7b8(plVar6,lVar4);
  uVar8 = 0;
  do {
    if (DAT_091fb0c8 == 0) goto LAB_074431b8;
    lVar4 = *plVar6;
    uVar3 = System_String__get_Chars(DAT_091fb0c8,uVar8 & 0xffffffff,0);
    if (lVar4 == 0) goto LAB_074431b8;
    if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_074431bc;
    lVar4 = lVar4 + uVar8;
    uVar8 = uVar8 + 1;
    *(undefined1 *)(lVar4 + 0x20) = uVar3;
  } while (uVar8 != 0x40);
  lVar4 = FUN_03f5c394(DAT_091804c8,0x80);
  plVar9 = (long *)(param_1 + 0x40);
  *plVar9 = lVar4;
  thunk_FUN_03f5d7b8(plVar9,lVar4);
  uVar8 = 0;
  do {
    lVar4 = *plVar9;
    if (lVar4 == 0) goto LAB_074431b8;
    if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_074431bc;
    lVar4 = lVar4 + uVar8;
    uVar8 = uVar8 + 1;
    *(undefined1 *)(lVar4 + 0x20) = 0xff;
  } while (uVar8 != 0x80);
  uVar8 = 0;
  do {
    lVar4 = *plVar6;
    if (lVar4 == 0) goto LAB_074431b8;
    if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_074431bc;
    lVar5 = *plVar9;
    if (lVar5 == 0) goto LAB_074431b8;
    bVar2 = *(byte *)(lVar4 + uVar8 + 0x20);
    if (*(uint *)(lVar5 + 0x18) <= (uint)bVar2) goto LAB_074431bc;
    *(char *)(lVar5 + (ulong)bVar2 + 0x20) = (char)uVar8;
    uVar8 = uVar8 + 1;
  } while (uVar8 != 0x40);
  lVar4 = FUN_03f5c394(DAT_0917fc40,0x80);
  plVar6 = (long *)(param_1 + 0x48);
  *plVar6 = lVar4;
  thunk_FUN_03f5d7b8(plVar6,lVar4);
  if (DAT_091f5840 != 0) {
    iVar1 = *(int *)(DAT_091f5840 + 0x10);
    if (0 < iVar1) {
      iVar7 = 0;
      do {
        if (DAT_091f5840 == 0) goto LAB_074431b8;
        lVar4 = *plVar6;
        uVar8 = System_String__get_Chars(DAT_091f5840,iVar7,0);
        if (lVar4 == 0) goto LAB_074431b8;
        if (*(uint *)(lVar4 + 0x18) <= ((uint)uVar8 & 0xffff)) goto LAB_074431bc;
        iVar7 = iVar7 + 1;
        *(undefined1 *)(lVar4 + (uVar8 & 0xffff) + 0x20) = 1;
      } while (iVar1 != iVar7);
    }
    if (*(char *)(param_1 + 0x50) != '\0') {
      if (DAT_091f6d10 == 0) goto LAB_074431b8;
      iVar1 = *(int *)(DAT_091f6d10 + 0x10);
      if (0 < iVar1) {
        iVar7 = 0;
        do {
          if (DAT_091f6d10 == 0) goto LAB_074431b8;
          lVar4 = *plVar6;
          uVar8 = System_String__get_Chars(DAT_091f6d10,iVar7,0);
          if (lVar4 == 0) goto LAB_074431b8;
          if (*(uint *)(lVar4 + 0x18) <= ((uint)uVar8 & 0xffff)) {
LAB_074431bc:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          iVar7 = iVar7 + 1;
          *(undefined1 *)(lVar4 + (uVar8 & 0xffff) + 0x20) = 1;
        } while (iVar1 != iVar7);
      }
    }
    return;
  }
LAB_074431b8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

