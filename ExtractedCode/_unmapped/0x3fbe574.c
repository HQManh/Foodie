// rea decompile_all
// name: FUN_03fbe574
// address: 0x3fbe574
// body: available
// range: 0x3fbe574-0x3fbe6a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fbe5cc to 0x3fb8458 thunk_FUN_03fc3840 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3fbe64c to 0x3fbe828 FUN_03fbe828 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3fbe66c to 0x3fc14b0 FUN_03fc14b0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3fbe680 to 0x3fb49f4 FUN_03fb49f4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3fbe6a0 to 0x3f7a1ac FUN_03f7a1ac (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03fbe574(long *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(uint *)(param_1 + 1) >> 0x10 & 0xff;
  lVar2 = FUN_03fbe6a4(uVar1);
  if (lVar2 == 0) {
    if (uVar1 < 0x15) {
      if (uVar1 < 0x13) {
        if (uVar1 - 0x11 < 2) {
          lVar2 = thunk_FUN_03fc3840(param_1);
          return lVar2;
        }
        if (uVar1 == 0xf) {
          FUN_03fbe574(*param_1,1);
          lVar2 = FUN_03fc14b0();
          return lVar2;
        }
      }
      else {
        if (uVar1 == 0x13) {
LAB_03fbe63c:
          thunk_FUN_03f98700(param_1);
          lVar2 = FUN_03fbe828();
          return lVar2;
        }
        if (uVar1 == 0x14) {
          uVar3 = FUN_03fbe574(*(undefined8 *)*param_1,param_2 & 1);
          uVar5 = 1;
          uVar4 = *(undefined1 *)(*param_1 + 8);
          goto LAB_03fbe698;
        }
      }
    }
    else if (uVar1 < 0x1d) {
      if (uVar1 == 0x15) {
        lVar2 = FUN_03fb49f4(*param_1,param_2 & 1);
        return lVar2;
      }
      if (uVar1 == 0x1b) {
        lVar2 = DAT_09535430;
      }
    }
    else {
      if (uVar1 == 0x1d) {
        uVar3 = FUN_03fbe574(*param_1,param_2 & 1);
        uVar4 = 1;
        uVar5 = 0;
LAB_03fbe698:
        lVar2 = FUN_03f7a1ac(uVar3,uVar4,uVar5);
        return lVar2;
      }
      if (uVar1 == 0x1e) goto LAB_03fbe63c;
    }
  }
  return lVar2;
}

