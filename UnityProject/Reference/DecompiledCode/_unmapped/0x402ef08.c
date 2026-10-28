// rea decompile_all
// name: FUN_0402ef08
// address: 0x402ef08
// body: available
// range: 0x402ef08-0x402f037 inclusive
// range: 0x402f040-0x402f04f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x402f04c to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0402ef08(void)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x19;
  long lVar8;
  long *local_18;
  
  plVar2 = (long *)__cxa_get_globals_fast();
  if ((plVar2 == (long *)0x0) || (unaff_x19 = *plVar2, unaff_x19 == 0)) {
    FUN_0402f618("terminating");
  }
  uVar3 = FUN_04049b1c(unaff_x19 + 0x60);
  if ((uVar3 & 1) == 0) {
    FUN_0402f618("terminating due to %s foreign exception",uRam0000000009515ab8);
  }
  else {
    lVar4 = FUN_04049b10(unaff_x19 + 0x60);
    if (lVar4 == 0x434c4e47432b2b01) {
      local_18 = *(long **)(unaff_x19 + 8);
      goto LAB_0402ef84;
    }
  }
  local_18 = (long *)(unaff_x19 + 0x80);
LAB_0402ef84:
  lVar8 = *(long *)(unaff_x19 + 0x10);
  lVar4 = *(long *)(lVar8 + 8);
  lVar5 = __cxa_demangle(lVar4,0,0,0);
  if (lVar5 != 0) {
    lVar4 = lVar5;
  }
  pcVar1 = FUN_0402f108;
  if (lVar5 != 0) {
    pcVar1 = free;
  }
  uVar3 = FUN_0402f93c(&std::exception::typeinfo,lVar8,&local_18);
  uVar7 = uRam0000000009515ab8;
  if ((uVar3 & 1) != 0) {
    uVar6 = (**(code **)(*local_18 + 0x10))();
    FUN_0402f618("terminating due to %s exception of type %s: %s",uVar7,lVar4,uVar6);
  }
  uVar7 = FUN_0402f618("terminating due to %s exception of type %s",uRam0000000009515ab8,lVar4);
  if (lVar4 != 0) {
    (*pcVar1)(lVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0404c2dc(uVar7);
}

