// rea decompile_all
// name: MessagePack.MessagePackPrimitives$$TryReadStringHeader
// address: 0x7385e58
// body: available
// range: 0x7385e58-0x7385fdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
MessagePack_MessagePackPrimitives__TryReadStringHeader
          (byte *param_1,undefined8 param_2,uint *param_3,undefined4 *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  uint local_48;
  ushort local_44 [2];
  byte *local_40;
  undefined8 uStack_38;
  
  local_40 = param_1;
  uStack_38 = param_2;
  if ((DAT_09520a35 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d34b8);
    FUN_03f5c2a4(&DAT_091b9770);
    FUN_03f5c2a4(&DAT_091b9798);
    DAT_09520a35 = 1;
  }
  uVar2 = (uint)param_2;
  local_44[0] = 0;
  local_48 = 0;
  *param_4 = 1;
  if ((int)uVar2 < 1) {
    local_48 = 0;
    uVar3 = 2;
    goto LAB_07385fc8;
  }
  bVar1 = *param_1;
  if (bVar1 < 0xa0) {
LAB_07385ed8:
    local_48 = 0;
    uVar3 = 1;
  }
  else {
    uVar4 = (uint)bVar1;
    if (bVar1 < 0xc0) {
      uVar3 = 0;
      local_48 = uVar4 & 0x1f;
      goto LAB_07385fc8;
    }
    if (uVar4 == 0xdb) {
      *param_4 = 5;
      if (uVar2 < 5) {
LAB_07385f5c:
        local_48 = 0;
        uVar3 = 3;
        goto LAB_07385fc8;
      }
      auVar5 = FUN_03eaac5c(&local_40,1,DAT_091b9770);
      uVar2 = MessagePack_MessagePackPrimitives__TryReadBigEndian
                        (auVar5._0_8_,auVar5._8_8_,&local_48);
      MessagePack_MessagePackPrimitives__AssumesTrue(uVar2 & 1);
    }
    else if (uVar4 == 0xda) {
      uVar3 = 3;
      *param_4 = 3;
      if (uVar2 < 3) {
        local_48 = 0;
        goto LAB_07385fc8;
      }
      auVar5 = FUN_03eaac5c(&local_40,1,DAT_091b9770);
      uVar2 = MessagePack_MessagePackPrimitives__TryReadBigEndian
                        (auVar5._0_8_,auVar5._8_8_,local_44);
      MessagePack_MessagePackPrimitives__AssumesTrue(uVar2 & 1);
      local_48 = (uint)local_44[0];
    }
    else {
      if (uVar4 != 0xd9) goto LAB_07385ed8;
      *param_4 = 2;
      if (uVar2 == 1) goto LAB_07385f5c;
      local_48 = (uint)param_1[1];
    }
    uVar3 = 0;
  }
LAB_07385fc8:
  *param_3 = local_48;
  return uVar3;
}

