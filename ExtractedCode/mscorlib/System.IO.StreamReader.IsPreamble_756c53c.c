// rea decompile_all
// name: System.IO.StreamReader$$IsPreamble
// address: 0x756c53c
// body: available
// range: 0x756c53c-0x756c663 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x756c65c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756c660 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_IO_StreamReader__IsPreamble(long param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  
  if ((DAT_09521a18 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9798);
    DAT_09521a18 = 1;
  }
  if (*(char *)(param_1 + 0x55) != '\0') {
    plVar3 = *(long **)(param_1 + 0x20);
    if (plVar3 == (long *)0x0) {
LAB_0756c660:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar9 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
    uVar2 = *(uint *)(param_1 + 0x48);
    uVar4 = *(uint *)(param_1 + 0x4c);
    uVar8 = auVar9._8_4_;
    uVar1 = uVar2;
    if ((int)uVar8 <= (int)uVar2) {
      uVar1 = uVar8;
    }
    if (0 < (int)(uVar1 - uVar4)) {
      lVar5 = *(long *)(param_1 + 0x30);
      if (lVar5 == 0) goto LAB_0756c660;
      iVar6 = 0;
      if (uVar4 <= *(uint *)(lVar5 + 0x18)) {
        iVar6 = *(uint *)(lVar5 + 0x18) - uVar4;
      }
      iVar7 = 0;
      if (uVar4 <= uVar8) {
        iVar7 = uVar8 - uVar4;
      }
      do {
        if ((iVar6 == 0) || (iVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (*(char *)(lVar5 + (int)uVar4 + 0x20) != *(char *)(auVar9._0_8_ + (long)(int)uVar4)) {
          *(undefined4 *)(param_1 + 0x4c) = 0;
          *(undefined1 *)(param_1 + 0x55) = 0;
          return 0;
        }
        uVar4 = uVar4 + 1;
        iVar6 = iVar6 + -1;
        *(uint *)(param_1 + 0x4c) = uVar4;
        iVar7 = iVar7 + -1;
      } while (uVar1 != uVar4);
    }
    if (*(char *)(param_1 + 0x55) != '\0') {
      if (uVar4 == uVar8) {
        System_Buffer__BlockCopy
                  (*(undefined8 *)(param_1 + 0x30),auVar9._8_8_ & 0xffffffff,
                   *(undefined8 *)(param_1 + 0x30),0,uVar2 - uVar8,0);
        *(undefined2 *)(param_1 + 0x54) = 0;
        *(uint *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) - uVar8;
        *(undefined4 *)(param_1 + 0x4c) = 0;
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

