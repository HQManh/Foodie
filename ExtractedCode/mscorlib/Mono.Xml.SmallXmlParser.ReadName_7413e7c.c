// rea decompile_all
// name: Mono.Xml.SmallXmlParser$$ReadName
// address: 0x7413e7c
// body: available
// range: 0x7413e7c-0x741402f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7413fe4 to 0x743662c System.String$$CreateString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7413fe8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7413fec to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x741402c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Xml_SmallXmlParser__ReadName(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  
  if ((DAT_09520f33 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    DAT_09520f33 = 1;
  }
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 == (long *)0x0) {
LAB_07413fe8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar1 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
  if (-1 < iVar1) {
    plVar2 = *(long **)(param_1 + 0x18);
    if (plVar2 == (long *)0x0) goto LAB_07413fe8;
    uVar3 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
    uVar3 = Mono_Xml_SmallXmlParser__IsNameChar(uVar3,uVar3 & 0xffffffff,1);
    if ((uVar3 & 1) != 0) {
      plVar2 = *(long **)(param_1 + 0x18);
      if (plVar2 == (long *)0x0) goto LAB_07413fe8;
      uVar3 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      if (-1 < (int)uVar3) {
        iVar1 = 0;
        uVar9 = 0;
        do {
          uVar4 = Mono_Xml_SmallXmlParser__IsNameChar(uVar3,uVar3 & 0xffffffff,0);
          if ((uVar4 & 1) == 0) break;
          lVar8 = *(long *)(param_1 + 0x40);
          if (lVar8 == 0) goto LAB_07413fe8;
          if (uVar9 == *(uint *)(lVar8 + 0x18)) {
            uVar5 = FUN_03f5c394(DAT_0917fcc8,iVar1);
            System_Array__Copy(*(undefined8 *)(param_1 + 0x40),uVar5,uVar9,0);
            *(undefined8 *)(param_1 + 0x40) = uVar5;
            thunk_FUN_03f5d7b8(param_1 + 0x40,uVar5);
            lVar8 = *(long *)(param_1 + 0x40);
            if (lVar8 == 0) goto LAB_07413fe8;
          }
          if (*(uint *)(lVar8 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          *(short *)(lVar8 + (long)(int)uVar9 * 2 + 0x20) = (short)(uVar3 & 0xffffffff);
          Mono_Xml_SmallXmlParser__Read(param_1);
          plVar2 = *(long **)(param_1 + 0x18);
          if (plVar2 == (long *)0x0) goto LAB_07413fe8;
          uVar3 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
          iVar1 = iVar1 + 2;
          uVar9 = uVar9 + 1;
        } while (-1 < (int)uVar3);
        if (uVar9 != 0) {
          System_String__CreateString(0,*(undefined8 *)(param_1 + 0x40),0,uVar9,0);
          return;
        }
      }
      puVar6 = &DAT_09212b08;
      goto LAB_07414004;
    }
  }
  puVar6 = &DAT_09213628;
LAB_07414004:
  uVar5 = thunk_FUN_03fc39d4(puVar6);
  uVar5 = Mono_Xml_SmallXmlParser__Error(param_1,uVar5);
  uVar7 = thunk_FUN_03fc39d4(&DAT_091d9488);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar7);
}

