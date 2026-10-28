// rea decompile_all
// name: std::__ndk1::ios_base::register_callback
// address: 0x3fecef4
// body: available
// range: 0x3fecef4-0x3fecfd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::ios_base::register_callback(void (*)(std::__ndk1::ios_base::event,
   std::__ndk1::ios_base&, int), int) */

void __thiscall
std::__ndk1::ios_base::register_callback
          (ios_base *this,_func_void_event_ios_base_ptr_int *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(this + 0x48);
  uVar4 = lVar6 + 1;
  if (*(ulong *)(this + 0x50) < uVar4) {
    uVar5 = *(ulong *)(this + 0x50) * 2;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (0xffffffffffffffe < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    pvVar2 = realloc(*(void **)(this + 0x38),uVar5 << 3);
    if (pvVar2 == (void *)0x0) {
      uVar1 = *(uint *)(this + 0x20);
      *(uint *)(this + 0x20) = uVar1 | 1;
      if ((*(uint *)(this + 0x24) & (uVar1 | 1)) != 0) goto LAB_03fecfc8;
    }
    *(void **)(this + 0x38) = pvVar2;
    pvVar2 = realloc(*(void **)(this + 0x40),uVar5 << 2);
    if (pvVar2 == (void *)0x0) {
      uVar1 = *(uint *)(this + 0x20);
      *(uint *)(this + 0x20) = uVar1 | 1;
      if ((*(uint *)(this + 0x24) & (uVar1 | 1)) != 0) {
LAB_03fecfc8:
        puVar3 = (undefined8 *)FUN_03fed0cc("ios_base::clear");
        *puVar3 = &PTR__ios_base_08fa9f08;
        if (puVar3[9] != 0) {
          lVar6 = puVar3[9] + -1;
          do {
            (**(code **)(puVar3[7] + lVar6 * 8))(0,puVar3,*(undefined4 *)(puVar3[8] + lVar6 * 4));
            lVar6 = lVar6 + -1;
          } while (lVar6 != -1);
        }
        locale::~locale((locale *)(puVar3 + 6));
        free((void *)puVar3[7]);
        free((void *)puVar3[8]);
        free((void *)puVar3[0xb]);
        free((void *)puVar3[0xe]);
        return;
      }
    }
    lVar6 = *(long *)(this + 0x48);
    *(void **)(this + 0x40) = pvVar2;
    *(ulong *)(this + 0x50) = uVar5;
    uVar4 = lVar6 + 1;
  }
  *(_func_void_event_ios_base_ptr_int **)(*(long *)(this + 0x38) + lVar6 * 8) = param_1;
  *(int *)(*(long *)(this + 0x40) + lVar6 * 4) = param_2;
  *(ulong *)(this + 0x48) = uVar4;
  return;
}

