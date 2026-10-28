// rea decompile_all
// name: System.Security.SecurityDocument$$InternalGetElement
// address: 0x74536f8
// body: available
// range: 0x74536f8-0x74538f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74538bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74538c0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74538f0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Security_SecurityDocument__InternalGetElement(long param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_09521109 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a7f0);
    DAT_09521109 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    uVar3 = *param_2;
    uVar1 = *(uint *)(lVar6 + 0x18);
    if ((int)uVar3 < (int)uVar1) {
      *param_2 = uVar3 + 1;
      if (uVar1 <= uVar3) {
LAB_074538c0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (*(char *)(lVar6 + (int)uVar3 + 0x20) == '\x01') {
        uVar4 = System_Security_SecurityDocument__GetString(param_1,param_2,param_3 & 1);
        if ((param_3 & 1) == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = thunk_FUN_03f9944c(DAT_0918a7f0);
          System_Security_SecurityElement___ctor(lVar6,uVar4,0);
        }
        while (lVar7 = *(long *)(param_1 + 0x10), lVar7 != 0) {
          uVar1 = *param_2;
          if (*(uint *)(lVar7 + 0x18) <= uVar1) goto LAB_074538c0;
          cVar2 = *(char *)(lVar7 + (int)uVar1 + 0x20);
          if (cVar2 != '\x02') {
            if (cVar2 != '\x03') goto LAB_07453878;
            *param_2 = uVar1 + 1;
            uVar4 = System_Security_SecurityDocument__GetString(param_1,param_2,param_3 & 1);
            if ((param_3 & 1) == 0) goto LAB_07453878;
            if (lVar6 != 0) {
              *(undefined8 *)(lVar6 + 0x10) = uVar4;
              thunk_FUN_03f5d7b8();
              goto LAB_07453878;
            }
            break;
          }
          *param_2 = uVar1 + 1;
          uVar4 = System_Security_SecurityDocument__GetString(param_1,param_2,param_3 & 1);
          uVar5 = System_Security_SecurityDocument__GetString(param_1,param_2,param_3 & 1);
          if ((param_3 & 1) != 0) {
            if (lVar6 == 0) break;
            System_Security_SecurityElement__AddAttribute(lVar6,uVar4,uVar5);
          }
        }
        goto LAB_074538bc;
      }
    }
    thunk_FUN_03fc39d4(&DAT_0918d988);
    uVar4 = thunk_FUN_03f9944c();
    System_Security_XmlSyntaxException___ctor();
    uVar5 = thunk_FUN_03fc39d4(&DAT_091d88f8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar5);
  }
  goto LAB_074538bc;
LAB_07453878:
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    uVar1 = *param_2;
    if (*(uint *)(lVar7 + 0x18) <= uVar1) goto LAB_074538c0;
    if (*(char *)(lVar7 + (int)uVar1 + 0x20) == '\x04') {
      *param_2 = uVar1 + 1;
      return lVar6;
    }
    uVar4 = System_Security_SecurityDocument__InternalGetElement(param_1,param_2,param_3 & 1);
    if ((param_3 & 1) != 0) {
      if (lVar6 == 0) goto LAB_074538bc;
      System_Security_SecurityElement__AddChild(lVar6,uVar4);
    }
    goto LAB_07453878;
  }
LAB_074538bc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

