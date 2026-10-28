// rea decompile_all
// name: System.Collections.Hashtable.HashtableEnumerator$$MoveNext
// address: 0x75610b4
// body: available
// range: 0x75610b4-0x75611e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7561198 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756119c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75611e4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Collections_Hashtable_HashtableEnumerator__MoveNext(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    iVar2 = *(int *)(*(long *)(param_1 + 0x10) + 0x28);
    thunk_FUN_03f6a5cc();
    if (iVar1 != iVar2) {
      thunk_FUN_03fc39d4(&DAT_091870e0);
      uVar3 = thunk_FUN_03f9944c();
      uVar4 = thunk_FUN_03fc39d4(&DAT_091feb80);
      System_InvalidOperationException___ctor(uVar3,uVar4,0);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091eb090);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar3,uVar4);
    }
    uVar8 = *(uint *)(param_1 + 0x18);
    do {
      uVar7 = uVar8;
      if ((int)uVar7 < 1) {
        uVar6 = 0;
        goto LAB_07561180;
      }
      uVar8 = uVar7 - 1;
      *(uint *)(param_1 + 0x18) = uVar8;
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar9 == 0)) goto LAB_07561198;
      if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_0756119c;
      lVar5 = *(long *)(lVar9 + (ulong)uVar8 * 0x18 + 0x20);
    } while ((lVar5 == 0) || (lVar5 == lVar9));
    *(long *)(param_1 + 0x28) = lVar5;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0x28));
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar9 != 0)) {
      if (*(uint *)(lVar9 + 0x18) <= *(uint *)(param_1 + 0x18)) {
LAB_0756119c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined8 *)(param_1 + 0x30) =
           *(undefined8 *)(lVar9 + (long)(int)*(uint *)(param_1 + 0x18) * 0x18 + 0x28);
      thunk_FUN_03f5d7b8();
      uVar6 = 1;
LAB_07561180:
      *(undefined1 *)(param_1 + 0x20) = uVar6;
      return 0 < (int)uVar7;
    }
  }
LAB_07561198:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

