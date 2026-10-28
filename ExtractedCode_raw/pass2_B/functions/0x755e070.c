// rea decompile_all
// name: System.Collections.Hashtable$$Clone
// address: 0x755e070
// body: available
// range: 0x755e070-0x755e17f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x755e178 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x755e17c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_Collections_Hashtable__Clone(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  
  if ((DAT_0952199f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185048);
    DAT_0952199f = 1;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  lVar6 = *(long *)(param_1 + 0x40);
  plVar2 = (long *)thunk_FUN_03f9944c(DAT_09185048);
  System_Collections_Hashtable___ctor(0x3f800000,plVar2,uVar1);
  plVar2[8] = lVar6;
  thunk_FUN_03f5d7b8(plVar2 + 8,lVar6);
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  thunk_FUN_03f6a5cc();
  thunk_FUN_03f6a5cc();
  uVar8 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(plVar2 + 5) = uVar1;
  *(undefined4 *)(plVar2 + 3) = 0;
  *(undefined4 *)((long)plVar2 + 0x24) = uVar8;
  if (lVar7 != 0) {
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      uVar3 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      uVar4 = uVar3 + 1;
      puVar5 = (undefined8 *)(lVar7 + uVar3 * 0x18 + 0x10);
      do {
        if ((ulong)*(uint *)(lVar7 + 0x18) <= uVar4 - 2) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar6 = puVar5[-1];
        if ((lVar6 != 0) && (lVar6 != lVar7)) {
          (**(code **)(*plVar2 + 0x318))(plVar2,lVar6,*puVar5,*(undefined8 *)(*plVar2 + 800));
        }
        uVar4 = uVar4 - 1;
        puVar5 = puVar5 + -3;
      } while (1 < uVar4);
    }
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

