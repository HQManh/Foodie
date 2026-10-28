// rea decompile_all
// name: System.String$$JoinCore
// address: 0x74310dc
// body: available
// range: 0x74310dc-0x7431267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7431214 to 0x7440700 System.Text.StringBuilderCache$$GetStringAndRelease (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7431218 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7431260 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7431264 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_String__JoinCore(undefined8 param_1,undefined4 param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  
  if (param_3 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar5 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_092253e0);
    System_ArgumentNullException___ctor(uVar5,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091da318);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar6);
  }
  if (*(ulong *)(param_3 + 0x18) != 0) {
    uVar1 = *(ulong *)(param_3 + 0x18) & 0xffffffff;
    if (uVar1 == 0) {
LAB_07431218:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar2 = *(long **)(param_3 + 0x20);
    if (plVar2 == (long *)0x0) {
      if (uVar1 != 1) {
        lVar3 = 0;
        goto LAB_07431170;
      }
    }
    else {
      lVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
      if (*(int *)(param_3 + 0x18) != 1) {
LAB_07431170:
        lVar4 = System_Text_StringBuilderCache__Acquire(0x10,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        System_Text_StringBuilder__Append(lVar4,lVar3,0);
        if (1 < *(int *)(param_3 + 0x18)) {
          lVar3 = 5;
          do {
            System_Text_StringBuilder__Append(lVar4,param_1,param_2,0);
            uVar7 = *(uint *)(param_3 + 0x18);
            if ((ulong)uVar7 <= lVar3 - 4U) goto LAB_07431218;
            plVar2 = *(long **)(param_3 + lVar3 * 8);
            if (plVar2 != (long *)0x0) {
              uVar5 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
              System_Text_StringBuilder__Append(lVar4,uVar5,0);
              uVar7 = (uint)*(undefined8 *)(param_3 + 0x18);
            }
            lVar8 = lVar3 + -3;
            lVar3 = lVar3 + 1;
          } while (lVar8 < (int)uVar7);
        }
        lVar3 = System_Text_StringBuilderCache__GetStringAndRelease(lVar4,0);
        return lVar3;
      }
      if (lVar3 != 0) {
        return lVar3;
      }
    }
  }
  return **(long **)(DAT_09535468 + 0xb8);
}

