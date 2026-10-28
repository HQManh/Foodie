// rea decompile_all
// name: Newtonsoft.Json.Converters.XContainerWrapper$$WrapNode
// address: 0x770e428
// body: available
// range: 0x770e428-0x770e72f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Converters_XContainerWrapper__WrapNode(long *param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if ((DAT_095229b9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918d230);
    FUN_03f5c2a4(&DAT_0918d228);
    FUN_03f5c2a4(&DAT_0918d248);
    FUN_03f5c2a4(&DAT_0918d240);
    FUN_03f5c2a4(&DAT_0918d258);
    FUN_03f5c2a4(&DAT_0918d250);
    FUN_03f5c2a4(&DAT_0918d288);
    FUN_03f5c2a4(&DAT_0918d280);
    FUN_03f5c2a4(&DAT_0918d290);
    FUN_03f5c2a4(&DAT_0918d278);
    FUN_03f5c2a4(&DAT_0918d2a8);
    FUN_03f5c2a4(&DAT_0918d298);
    FUN_03f5c2a4(&DAT_0918d2e0);
    FUN_03f5c2a4(&DAT_0918d328);
    FUN_03f5c2a4(&DAT_0918d320);
    FUN_03f5c2a4(&DAT_0918d3c0);
    FUN_03f5c2a4(&DAT_0918d3b8);
    DAT_095229b9 = 1;
  }
  if (param_1 != (long *)0x0) {
    lVar2 = *param_1;
    bVar1 = *(byte *)(lVar2 + 0x130);
    if ((*(byte *)(DAT_0918d278 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(DAT_0918d278 + 0x130) * 8 + -8) ==
        DAT_0918d278)) {
      puVar3 = &DAT_0918d290;
      goto LAB_0770e688;
    }
    if ((*(byte *)(DAT_0918d298 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(DAT_0918d298 + 0x130) * 8 + -8) ==
        DAT_0918d298)) {
      puVar3 = &DAT_0918d2a8;
      goto LAB_0770e688;
    }
    if ((*(byte *)(DAT_0918d250 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(DAT_0918d250 + 0x130) * 8 + -8) ==
        DAT_0918d250)) {
      puVar3 = &DAT_0918d258;
      goto LAB_0770e688;
    }
    if ((*(byte *)(DAT_0918d320 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(DAT_0918d320 + 0x130) * 8 + -8) ==
        DAT_0918d320)) {
      puVar3 = &DAT_0918d328;
      goto LAB_0770e688;
    }
    if ((*(byte *)(DAT_0918d3b8 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(DAT_0918d3b8 + 0x130) * 8 + -8) ==
        DAT_0918d3b8)) {
      puVar3 = &DAT_0918d3c0;
      goto LAB_0770e688;
    }
    if ((*(byte *)(DAT_0918d240 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(DAT_0918d240 + 0x130) * 8 + -8) ==
        DAT_0918d240)) {
      puVar3 = &DAT_0918d248;
      goto LAB_0770e688;
    }
    if ((*(byte *)(DAT_0918d228 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(DAT_0918d228 + 0x130) * 8 + -8) ==
        DAT_0918d228)) {
      puVar3 = &DAT_0918d230;
      goto LAB_0770e688;
    }
    if ((*(byte *)(DAT_0918d280 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(DAT_0918d280 + 0x130) * 8 + -8) ==
        DAT_0918d280)) {
      lVar2 = thunk_FUN_03f9944c(DAT_0918d288);
      Newtonsoft_Json_Converters_XDocumentTypeWrapper___ctor(lVar2,param_1);
      return lVar2;
    }
  }
  puVar3 = &DAT_0918d2e0;
LAB_0770e688:
  lVar2 = thunk_FUN_03f9944c(*puVar3);
  System_Object___ctor(lVar2,0);
  *(long *)(lVar2 + 0x10) = (long)param_1;
  thunk_FUN_03f5d7b8((long *)(lVar2 + 0x10),param_1);
  return lVar2;
}

