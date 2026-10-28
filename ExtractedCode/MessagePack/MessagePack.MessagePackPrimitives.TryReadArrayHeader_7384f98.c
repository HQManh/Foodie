// rea decompile_all
// name: MessagePack.MessagePackPrimitives$$TryReadArrayHeader
// address: 0x7384f98
// body: available
// range: 0x7384f98-0x7385103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
MessagePack_MessagePackPrimitives__TryReadArrayHeader
          (byte *param_1,int param_2,uint *param_3,undefined4 *param_4)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint local_38;
  ushort local_34 [2];
  
  if ((DAT_09520a2e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d3478);
    FUN_03f5c2a4(&DAT_091b9770);
    FUN_03f5c2a4(&DAT_091b9798);
    DAT_09520a2e = 1;
  }
  local_34[0] = 0;
  local_38 = 0;
  *param_4 = 1;
  if (param_2 == 0) {
    local_38 = 0;
    uVar5 = 2;
    goto LAB_073850ec;
  }
  bVar1 = *param_1;
  if (0x8f < bVar1) {
    uVar4 = (uint)bVar1;
    if (bVar1 < 0xa0) {
      uVar5 = 0;
      local_38 = uVar4 & 0xf;
      goto LAB_073850ec;
    }
    if (uVar4 == 0xdc) {
      lVar2 = *(long *)(DAT_091b9770 + 0x20);
      *param_4 = 3;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      uVar3 = MessagePack_MessagePackPrimitives__TryReadBigEndian(param_1 + 1,param_2 + -1,local_34)
      ;
      if ((uVar3 & 1) == 0) {
        local_38 = 0;
        uVar5 = 3;
      }
      else {
        local_38 = (uint)local_34[0];
        uVar5 = 0;
      }
      goto LAB_073850ec;
    }
    if (uVar4 == 0xdd) {
      lVar2 = *(long *)(DAT_091b9770 + 0x20);
      *param_4 = 5;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      uVar3 = MessagePack_MessagePackPrimitives__TryReadBigEndian
                        (param_1 + 1,param_2 + -1,&local_38);
      uVar5 = 0;
      if ((uVar3 & 1) == 0) {
        uVar5 = 3;
        local_38 = 0;
      }
      goto LAB_073850ec;
    }
  }
  local_38 = 0;
  uVar5 = 1;
LAB_073850ec:
  *param_3 = local_38;
  return uVar5;
}

