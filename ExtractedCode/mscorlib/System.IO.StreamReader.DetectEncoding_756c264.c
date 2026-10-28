// rea decompile_all
// name: System.IO.StreamReader$$DetectEncoding
// address: 0x756c264
// body: available
// range: 0x756c264-0x756c53b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x756c534 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756c538 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_StreamReader__DetectEncoding(long param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  
  if ((DAT_09521a17 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_0918c548);
    DAT_09521a17 = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x48);
  if ((int)uVar1 < 2) {
    return;
  }
  lVar7 = *(long *)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x54) = 0;
  if (lVar7 == 0) goto LAB_0756c538;
  uVar2 = *(uint *)(lVar7 + 0x18);
  if (uVar2 == 0) goto LAB_0756c534;
  cVar3 = *(char *)(lVar7 + 0x20);
  if (cVar3 == -1) {
    if (uVar2 == 1) goto LAB_0756c534;
    if (*(char *)(lVar7 + 0x21) != -2) goto LAB_0756c400;
    if (uVar1 < 4) {
LAB_0756c32c:
      uVar5 = System_Text_Encoding__get_Unicode(0);
      goto LAB_0756c334;
    }
    if (uVar2 < 3) goto LAB_0756c534;
    if (*(char *)(lVar7 + 0x22) != '\0') goto LAB_0756c32c;
    if (uVar2 == 3) goto LAB_0756c534;
    if (*(char *)(lVar7 + 0x23) != '\0') goto LAB_0756c32c;
    uVar5 = System_Text_Encoding__get_UTF32(0);
    *(undefined8 *)(param_1 + 0x20) = uVar5;
LAB_0756c520:
    thunk_FUN_03f5d7b8(param_1 + 0x20,uVar5);
    System_IO_StreamReader__CompressBuffer(param_1,4);
  }
  else {
    if (cVar3 == -2) {
      if (uVar2 == 1) goto LAB_0756c534;
      if (*(char *)(lVar7 + 0x21) != -1) goto LAB_0756c400;
      uVar5 = System_Text_Encoding__get_BigEndianUnicode(0);
LAB_0756c334:
      *(undefined8 *)(param_1 + 0x20) = uVar5;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x20),uVar5);
      System_Buffer__BlockCopy
                (*(undefined8 *)(param_1 + 0x30),2,*(undefined8 *)(param_1 + 0x30),0,
                 *(int *)(param_1 + 0x48) + -2,0);
      iVar4 = *(int *)(param_1 + 0x48) + -2;
    }
    else {
LAB_0756c400:
      if (uVar1 == 2) {
        *(undefined1 *)(param_1 + 0x54) = 1;
        return;
      }
      if (cVar3 != -0x11) {
        if (uVar1 < 4) {
          return;
        }
        if (cVar3 != '\0') {
          return;
        }
        if (uVar2 == 1) goto LAB_0756c534;
        if (*(char *)(lVar7 + 0x21) != '\0') {
          return;
        }
        if (uVar2 < 3) goto LAB_0756c534;
        if (*(char *)(lVar7 + 0x22) != -2) {
          return;
        }
        if (uVar2 == 3) goto LAB_0756c534;
        if (*(char *)(lVar7 + 0x23) != -1) {
          return;
        }
        uVar5 = thunk_FUN_03f9944c(DAT_0918c548);
        System_Text_UTF32Encoding___ctor(uVar5,1,1,0);
        *(undefined8 *)(param_1 + 0x20) = uVar5;
        goto LAB_0756c520;
      }
      if (uVar2 == 1) {
LAB_0756c534:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (*(char *)(lVar7 + 0x21) != -0x45) {
        return;
      }
      if (uVar2 < 3) goto LAB_0756c534;
      if (*(char *)(lVar7 + 0x22) != -0x41) {
        return;
      }
      uVar5 = System_Text_Encoding__get_UTF8(0);
      *(undefined8 *)(param_1 + 0x20) = uVar5;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x20),uVar5);
      System_Buffer__BlockCopy
                (*(undefined8 *)(param_1 + 0x30),3,*(undefined8 *)(param_1 + 0x30),0,
                 *(int *)(param_1 + 0x48) + -3,0);
      iVar4 = *(int *)(param_1 + 0x48) + -3;
    }
    *(int *)(param_1 + 0x48) = iVar4;
  }
  plVar6 = *(long **)(param_1 + 0x20);
  if (plVar6 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar6 + 0x328))(plVar6,*(undefined8 *)(*plVar6 + 0x330));
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x28),uVar5);
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (plVar6 = *(long **)(param_1 + 0x20), plVar6 != (long *)0x0)) {
      iVar4 = (**(code **)(*plVar6 + 0x358))
                        (plVar6,*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x18),
                         *(undefined8 *)(*plVar6 + 0x360));
      if (*(int *)(param_1 + 0x50) < iVar4) {
        uVar5 = FUN_03f5c394(DAT_0917fcc8,iVar4);
        *(undefined8 *)(param_1 + 0x38) = uVar5;
        thunk_FUN_03f5d7b8();
      }
      *(int *)(param_1 + 0x50) = iVar4;
      return;
    }
  }
LAB_0756c538:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

