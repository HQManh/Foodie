// rea decompile_all
// name: std::__ndk1::locale::global
// address: 0x401c418
// body: available
// range: 0x401c418-0x401c5ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::locale::global(std::__ndk1::locale const&) */

void __thiscall std::__ndk1::locale::global(locale *this,locale *param_1)

{
  ulong uVar1;
  char *pcVar2;
  byte bVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  locale *plVar8;
  locale *in_x8;
  ulong local_60;
  ulong uStack_58;
  char *local_50;
  
  if (((bRam000000000974a4d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(0x974a4d8), iVar6 != 0)) {
    plVar8 = (locale *)classic();
    locale((locale *)0x974a4d0,plVar8);
    __cxa_guard_release(0x974a4d8);
  }
  locale(in_x8,(locale *)0x974a4d0);
  if (*(long *)this != 0x974a2b0) {
    FUN_0404bff0(1,*(long *)this + 8);
  }
  plVar4 = plRam000000000974a4d0;
  if ((plRam000000000974a4d0 == (long *)0x974a2b0) ||
     (lVar7 = FUN_0404c020(0xffffffffffffffff,plRam000000000974a4d0 + 1), lVar7 != 0)) {
    plRam000000000974a4d0 = *(long **)this;
    bVar3 = *(byte *)((long)plRam000000000974a4d0 + 0x120);
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    plRam000000000974a4d0 = *(long **)this;
    bVar3 = *(byte *)((long)plRam000000000974a4d0 + 0x120);
  }
  if ((bVar3 & 1) == 0) {
    uStack_58 = *(ulong *)((long)plRam000000000974a4d0 + 0x128);
    local_60 = *(ulong *)((long)plRam000000000974a4d0 + 0x120);
    local_50 = *(char **)((long)plRam000000000974a4d0 + 0x130);
  }
  else {
    FUN_03f5d0a4(&local_60,*(undefined8 *)((long)plRam000000000974a4d0 + 0x130),
                 *(undefined8 *)((long)plRam000000000974a4d0 + 0x128));
  }
  uVar1 = local_60 >> 1 & 0x7f;
  if ((local_60 & 1) != 0) {
    uVar1 = uStack_58;
  }
  if (uVar1 == 1) {
    pcVar2 = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pcVar2 = local_50;
    }
    bVar5 = *pcVar2 == '*';
  }
  else {
    bVar5 = false;
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (!bVar5) {
    if ((*(byte *)((long)plRam000000000974a4d0 + 0x120) & 1) == 0) {
      uStack_58 = *(ulong *)((long)plRam000000000974a4d0 + 0x128);
      local_60 = *(ulong *)((long)plRam000000000974a4d0 + 0x120);
      local_50 = *(char **)((long)plRam000000000974a4d0 + 0x130);
    }
    else {
      FUN_03f5d0a4(&local_60,*(undefined8 *)((long)plRam000000000974a4d0 + 0x130),
                   *(undefined8 *)((long)plRam000000000974a4d0 + 0x128));
    }
    pcVar2 = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pcVar2 = local_50;
    }
    setlocale(6,pcVar2);
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  return;
}

