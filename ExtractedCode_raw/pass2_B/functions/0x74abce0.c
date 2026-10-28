// rea decompile_all
// name: System.Runtime.Serialization.FormatterServices$$GetSerializableMembers
// address: 0x74abce0
// body: available
// range: 0x74abce0-0x74abe83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74abe70 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74abe74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74abe80 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_Runtime_Serialization_FormatterServices__GetSerializableMembers(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  
  if ((DAT_095213f7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917ff08);
    DAT_095213f7 = 1;
  }
  if ((param_1 == (long *)0x0) ||
     (plVar3 = (long *)(**(code **)(*param_1 + 0x708))
                                 (param_1,0x34,*(undefined8 *)(*param_1 + 0x710)),
     plVar3 == (long *)0x0)) {
LAB_074abe74:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = *(uint *)(plVar3 + 3);
  if ((int)uVar2 < 1) {
    uVar8 = 0;
  }
  else {
    lVar9 = 0;
    uVar8 = 0;
    do {
      if (uVar2 <= (uint)lVar9) goto LAB_074abe70;
      plVar4 = (long *)plVar3[lVar9 + 4];
      if (plVar4 == (long *)0x0) goto LAB_074abe74;
      uVar1 = (**(code **)(*plVar4 + 600))(plVar4,*(undefined8 *)(*plVar4 + 0x260));
      uVar2 = *(uint *)(plVar3 + 3);
      lVar9 = lVar9 + 1;
      uVar8 = ((uVar1 >> 7 ^ 0xffffffff) & 1) + uVar8;
    } while ((int)lVar9 < (int)uVar2);
  }
  plVar4 = plVar3;
  if (uVar8 != uVar2) {
    plVar4 = (long *)FUN_03f5c394(DAT_0917ff08,uVar8);
    uVar2 = *(uint *)(plVar3 + 3);
    if (0 < (int)uVar2) {
      lVar9 = 0;
      uVar8 = 0;
      do {
        if (uVar2 <= (uint)lVar9) {
LAB_074abe70:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar5 = (long *)plVar3[lVar9 + 4];
        if (plVar5 == (long *)0x0) goto LAB_074abe74;
        uVar2 = (**(code **)(*plVar5 + 600))(plVar5,*(undefined8 *)(*plVar5 + 0x260));
        if ((uVar2 >> 7 & 1) == 0) {
          if (*(uint *)(plVar3 + 3) <= (uint)lVar9) goto LAB_074abe70;
          if (plVar4 == (long *)0x0) goto LAB_074abe74;
          lVar10 = plVar3[lVar9 + 4];
          if ((lVar10 != 0) &&
             (lVar6 = thunk_FUN_03f99350(lVar10,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
            uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar7,0);
          }
          if (*(uint *)(plVar4 + 3) <= uVar8) goto LAB_074abe70;
          plVar4[(long)(int)uVar8 + 4] = lVar10;
          thunk_FUN_03f5d7b8(plVar4 + (long)(int)uVar8 + 4,lVar10);
          uVar8 = uVar8 + 1;
        }
        uVar2 = *(uint *)(plVar3 + 3);
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < (int)uVar2);
    }
  }
  return plVar4;
}

