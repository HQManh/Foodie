// rea decompile_all
// name: System.TermInfoDriver$$ReadUntilConditionInternal
// address: 0x760ab34
// body: available
// range: 0x760ab34-0x760ad1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x760ad14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760ad18 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_TermInfoDriver__ReadUntilConditionInternal(long param_1,ulong param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong unaff_x22;
  undefined1 auVar11 [16];
  char local_54 [4];
  
  if ((DAT_09522017 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_09522017 = 1;
  }
  local_54[0] = '\0';
  if (*(char *)(param_1 + 0xa0) == '\0') {
    System_TermInfoDriver__Init(param_1);
  }
  System_TermInfoDriver__GetCursorPosition(param_1);
  plVar7 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar7,0);
  lVar10 = *(long *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0x18);
  if (lVar10 != 0) {
    if (*(uint *)(lVar10 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    bVar1 = *(byte *)(lVar10 + 0x24);
    bVar5 = false;
LAB_0760abd0:
    do {
      bVar2 = bVar5;
      auVar11 = System_TermInfoDriver__ReadKeyInternal(param_1,local_54);
      cVar4 = local_54[0];
      uVar8 = auVar11._0_8_;
      bVar5 = local_54[0] != '\0' || bVar2;
      if (((uint)bVar1 == (auVar11._0_4_ & 0xffff)) && ((uVar8 & 0xffff) != 0)) {
        if (plVar7 == (long *)0x0) goto LAB_0760ad14;
        iVar6 = System_Text_StringBuilder__get_Length(plVar7,0);
        if (iVar6 == 0) {
          return 0;
        }
      }
      if ((auVar11._4_4_ == 0xd) && ((param_2 & 1) != 0)) {
        bVar3 = true;
      }
      else {
        if (auVar11._4_4_ == 8) {
          if (plVar7 == (long *)0x0) goto LAB_0760ad14;
          iVar6 = System_Text_StringBuilder__get_Length(plVar7,0);
          if (iVar6 < 1) goto LAB_0760abd0;
          iVar6 = System_Text_StringBuilder__get_Length(plVar7,0);
          System_Text_StringBuilder__set_Length(plVar7,iVar6 + -1,0);
        }
        else {
          if (plVar7 == (long *)0x0) goto LAB_0760ad14;
          System_Text_StringBuilder__Append(plVar7,uVar8 & 0xffffffff,0);
        }
        bVar3 = false;
      }
      if (cVar4 != '\0' || bVar2) {
        unaff_x22 = unaff_x22 & 0xffffffff00000000 | auVar11._8_8_ & 0xffffffff;
        System_TermInfoDriver__Echo(param_1,uVar8,unaff_x22);
      }
    } while (!bVar3);
    System_TermInfoDriver__EchoFlush(param_1);
    *(undefined8 *)(param_1 + 0x100) = 0xffffffffffffffff;
    if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0760acf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      return uVar9;
    }
  }
LAB_0760ad14:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

