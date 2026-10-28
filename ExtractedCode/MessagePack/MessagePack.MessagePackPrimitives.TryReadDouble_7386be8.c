// rea decompile_all
// name: MessagePack.MessagePackPrimitives$$TryReadDouble
// address: 0x7386be8
// body: available
// range: 0x7386be8-0x7386d8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
MessagePack_MessagePackPrimitives__TryReadDouble
          (byte *param_1,undefined8 param_2,double *param_3,undefined4 *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  double dVar5;
  undefined1 auVar6 [16];
  long local_58;
  double local_50;
  float local_44;
  byte *local_40;
  undefined8 uStack_38;
  
  local_40 = param_1;
  uStack_38 = param_2;
  if ((DAT_09520a42 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9770);
    FUN_03f5c2a4(&DAT_091b9798);
    DAT_09520a42 = 1;
  }
  dVar5 = 0.0;
  uVar2 = (uint)param_2;
  local_44 = 0.0;
  local_58 = 0;
  local_50 = 0.0;
  *param_4 = 1;
  if ((int)uVar2 < 1) {
    uVar3 = 2;
    goto LAB_07386ca8;
  }
  bVar1 = *param_1;
  if (bVar1 < 0xe0) {
    if ((char)bVar1 < '\0') {
      uVar3 = 1;
      if (0xcf < bVar1) {
        if (3 < bVar1 - 0xd0) goto LAB_07386ca8;
        goto LAB_07386c60;
      }
      uVar4 = (uint)bVar1;
      if (3 < uVar4 - 0xcc) {
        if (uVar4 == 0xca) {
          *param_4 = 5;
          if (4 < uVar2) {
            auVar6 = FUN_03eaac5c(&local_40,1,DAT_091b9770);
            uVar2 = MessagePack_MessagePackPrimitives__TryReadBigEndian
                              (auVar6._0_8_,auVar6._8_8_,&local_44);
            MessagePack_MessagePackPrimitives__AssumesTrue(uVar2 & 1);
            uVar3 = 0;
            dVar5 = (double)local_44;
            goto LAB_07386ca8;
          }
        }
        else {
          if (uVar4 != 0xcb) goto LAB_07386ca8;
          *param_4 = 9;
          if (8 < uVar2) {
            auVar6 = FUN_03eaac5c(&local_40,1,DAT_091b9770);
            uVar2 = MessagePack_MessagePackPrimitives__TryReadBigEndian
                              (auVar6._0_8_,auVar6._8_8_,&local_50);
            MessagePack_MessagePackPrimitives__AssumesTrue(uVar2 & 1);
            uVar3 = 0;
            dVar5 = local_50;
            goto LAB_07386ca8;
          }
        }
        uVar3 = 3;
        goto LAB_07386ca8;
      }
    }
    uVar3 = MessagePack_MessagePackPrimitives__TryReadUInt64(param_1,param_2,&local_50,param_4);
    dVar5 = (double)NEON_ucvtf(local_50);
  }
  else {
LAB_07386c60:
    uVar3 = MessagePack_MessagePackPrimitives__TryReadInt64(param_1,param_2,&local_58,param_4);
    dVar5 = (double)local_58;
  }
LAB_07386ca8:
  *param_3 = dVar5;
  return uVar3;
}

