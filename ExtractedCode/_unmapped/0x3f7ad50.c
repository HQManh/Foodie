// rea decompile_all
// name: FUN_03f7ad50
// address: 0x3f7ad50
// body: available
// range: 0x3f7ad50-0x3f7ae83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f7ad50(code *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 local_c0;
  long local_b8;
  long *local_b0;
  long *local_a8;
  long local_a0;
  long lStack_98;
  long *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [8];
  long local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  FUN_03f85e5c(&DAT_09534648);
  FUN_03f7e520(auStack_78,0x9534650);
  do {
    local_80 = 0;
    local_c0 = 0x9534650;
    local_b8 = lRam0000000009534690;
    local_b0 = plRam0000000009534698;
    local_a8 = plRam0000000009534698;
    local_a0 = 0;
    lStack_98 = lRam0000000009534690;
    local_90 = plRam0000000009534698;
    plStack_88 = plRam0000000009534698;
    FUN_03f7c470(&local_c0);
    if ((((local_70 == local_b8) && (local_68 == local_b0)) && (local_60 == local_a8)) &&
       ((local_60 == local_68 || (local_58 == local_a0)))) {
      FUN_03f85e64(&DAT_09534648);
      return;
    }
    (*param_1)(*(undefined8 *)(local_58 + 0x10),param_2);
    local_58 = local_58 + 0x18;
    plVar2 = local_60;
    if (local_58 == *local_60 + (ulong)*(ushort *)(local_60 + 1) * 0x18) {
      do {
        plVar3 = local_60 + 2;
        plVar2 = local_68;
        if (plVar3 == local_68) break;
        local_58 = *plVar3;
        plVar1 = local_60 + 3;
        local_60 = plVar3;
        plVar2 = plVar3;
      } while ((short)*plVar1 == 0);
    }
    local_60 = plVar2;
    FUN_03f7c470(auStack_78);
  } while( true );
}

