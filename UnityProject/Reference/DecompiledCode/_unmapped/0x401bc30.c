// rea decompile_all
// name: FUN_0401bc30
// address: 0x401bc30
// body: available
// range: 0x401bc30-0x401bd0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x401bd08 to 0x89dbd60 operator.delete (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0401bc30(__shared_weak_count *param_1)

{
  bool bVar1;
  __shared_weak_count *p_Var2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  p_Var2 = *(__shared_weak_count **)(param_1 + 0x18);
  *(undefined **)param_1 = &UNK_08faab28;
  if (p_Var2 != *(__shared_weak_count **)(param_1 + 0x10)) {
    p_Var2 = *(__shared_weak_count **)(param_1 + 0x10);
    uVar4 = 0;
    uVar6 = 1;
    do {
      plVar5 = *(long **)(p_Var2 + uVar4 * 8);
      if ((plVar5 != (long *)0x0) &&
         (lVar3 = FUN_0404c020(0xffffffffffffffff,plVar5 + 1), lVar3 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
      p_Var2 = *(__shared_weak_count **)(param_1 + 0x10);
      bVar1 = uVar6 < (ulong)(*(long *)(param_1 + 0x18) - (long)p_Var2 >> 3);
      uVar4 = uVar6;
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (bVar1);
  }
  if (((byte)param_1[0x120] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x130));
    p_Var2 = *(__shared_weak_count **)(param_1 + 0x10);
  }
  if (p_Var2 != (__shared_weak_count *)0x0) {
    *(__shared_weak_count **)(param_1 + 0x18) = p_Var2;
    if (p_Var2 == param_1 + 0x28) {
      p_Var2[0xf0] = (__shared_weak_count)0x0;
    }
    else {
      operator_delete(p_Var2);
    }
  }
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}

