// rea decompile_all
// name: Mono.Security.ASN1$$Decode
// address: 0x741dc74
// body: available
// range: 0x741dc74-0x741dd97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_ASN1__Decode(undefined8 param_1,undefined8 param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  int local_5c;
  undefined8 local_58;
  int local_48;
  byte local_44 [4];
  
  uVar4 = param_1;
  if ((DAT_09520f74 & 1) == 0) {
    uVar4 = FUN_03f5c2a4(&DAT_09180e20);
    DAT_09520f74 = 1;
  }
  iVar1 = *param_3;
  local_44[0] = 0;
  local_48 = 0;
  local_58 = 0;
  local_5c = 0;
  while (iVar1 < param_4 + -1) {
    uVar4 = Mono_Security_ASN1__DecodeTLV(uVar4,param_2,param_3,local_44,&local_48,&local_58);
    bVar3 = local_44[0];
    uVar2 = local_58;
    if (local_44[0] == 0) {
      iVar1 = *param_3;
    }
    else {
      lVar5 = thunk_FUN_03f9944c(DAT_09180e20);
      System_Object___ctor(lVar5,0);
      *(byte *)(lVar5 + 0x10) = bVar3;
      *(undefined8 *)(lVar5 + 0x18) = uVar2;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x18),uVar2);
      uVar4 = Mono_Security_ASN1__Add(param_1,lVar5);
      iVar1 = local_48;
      if ((bVar3 >> 5 & 1) != 0) {
        local_5c = *param_3;
        uVar4 = Mono_Security_ASN1__Decode(lVar5,param_2,&local_5c,local_48 + local_5c);
      }
      iVar1 = iVar1 + *param_3;
      *param_3 = iVar1;
    }
  }
  return;
}

