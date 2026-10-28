// rea decompile_all
// name: System.Security.SecurityElement$$SearchForTextOfLocalName
// address: 0x74569c4
// body: available
// range: 0x74569c4-0x7456c03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7456a90 to 0x74558d0 System.Security.SecurityElement$$Unescape (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7456bb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7456bb8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7456c00 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Security_SecurityElement__SearchForTextOfLocalName(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  
  if ((DAT_09521127 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0918a7f0);
    FUN_03f5c2a4(&DAT_091f9f58);
    DAT_09521127 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar2 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_092235b8);
    System_ArgumentNullException___ctor(uVar2,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091d8920);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar2,uVar6);
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return 0;
  }
  uVar1 = System_String__Equals(*(long *)(param_1 + 0x18),param_2,0);
  if ((uVar1 & 1) == 0) {
    lVar8 = *(long *)(param_1 + 0x18);
    uVar2 = System_String__Concat(DAT_091f9f58,param_2,0);
    if (lVar8 == 0) {
LAB_07456bb4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = System_String__EndsWith(lVar8,uVar2,4,0);
    if ((uVar1 & 1) == 0) {
      plVar3 = *(long **)(param_1 + 0x28);
      lVar8 = 0;
      if (plVar3 != (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar3 + 0x388))(plVar3,*(undefined8 *)(*plVar3 + 0x390));
        if (plVar3 == (long *)0x0) goto LAB_07456bb4;
        do {
          lVar8 = *plVar3;
          uVar1 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar1 != 0) {
            piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_09185b10) {
                puVar4 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_07456b10;
              }
              uVar1 = uVar1 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar1 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_07456b10:
          uVar1 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          if ((uVar1 & 1) == 0) {
            return 0;
          }
          lVar8 = *plVar3;
          uVar1 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar1 != 0) {
            piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_09185b10) {
                puVar4 = (undefined8 *)(lVar8 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                goto LAB_07456b70;
              }
              uVar1 = uVar1 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar1 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,1);
LAB_07456b70:
          plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
          if (plVar5 == (long *)0x0) goto LAB_07456bb4;
          if (*plVar5 != DAT_0918a7f0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0();
          }
          lVar8 = System_Security_SecurityElement__SearchForTextOfLocalName(plVar5,param_2);
        } while (lVar8 == 0);
      }
      return lVar8;
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(DAT_0918a7f0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar8 = System_Security_SecurityElement__Unescape(uVar2);
  return lVar8;
}

