// rea decompile_all
// name: FUN_03fbfd7c
// address: 0x3fbfd7c
// body: available
// range: 0x3fbfd7c-0x3fbffcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fbfdf8 to 0x3fb46e8 FUN_03fb46e8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3fbfe2c to 0x3fc03e8 FUN_03fc03e8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fbfd7c(long *param_1,undefined8 param_2)

{
  short sVar1;
  ushort uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  uint local_50;
  undefined2 local_4c;
  undefined4 local_4a;
  ushort local_46;
  char local_44;
  
  sVar1 = (short)param_1[0x24];
  if (((sVar1 != 0) || (*(char *)((long)param_1 + 0x132) != '\0')) && (param_1[0x13] == 0)) {
    if (param_1[0xc] != 0) {
      uVar3 = FUN_03fb4784(param_1[0xc]);
      FUN_03fbffcc(uVar3,param_2);
      FUN_03fb46e8(param_1);
      return;
    }
    if (*(char *)((long)param_1 + 0x132) != '\0') {
      FUN_03fbffcc(param_1[8],param_2);
      FUN_03fc03e8(param_1,param_2);
      return;
    }
    if (sVar1 == 0) {
      param_1[0x13] = 0;
    }
    else {
      lVar4 = FUN_03fa7f34(sVar1,8);
      param_1[0x13] = lVar4;
      puVar5 = (undefined8 *)FUN_03fa7f34((short)param_1[0x24],0x58);
      uVar2 = *(ushort *)(param_1 + 0x24);
      if ((ulong)uVar2 != 0) {
        uVar7 = 0;
        do {
          FUN_03fac260(&local_68,param_1,uVar7 & 0xffffffff);
          puVar5[3] = local_60;
          if ((int)((ulong)local_50 & 0xffffff) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined8 *)
                     (*(long *)(*(long *)(*param_1 + 0x38) + 0x10) +
                      ((ulong)local_50 & 0xffffff) * 8 + -8);
          }
          *puVar5 = uVar3;
          if (((int)param_1[5] < 0) && (lVar4 = FUN_03fc0720(), lVar4 != 0)) {
            puVar5[1] = lVar4;
          }
          if (puVar5[1] == 0) {
            puVar5[1] = *puVar5;
          }
          puVar5[4] = param_1;
          puVar5[5] = local_58;
          *(char *)((long)puVar5 + 0x52) = (char)local_46;
          lVar4 = FUN_03fa7f34(local_46,8);
          if (local_46 != 0) {
            uVar8 = 0;
            do {
              FUN_03fac354(&local_80,param_1,local_68,uVar8 & 0xffffffff);
              *(undefined8 *)(lVar4 + uVar8 * 8) = local_70;
              uVar8 = uVar8 + 1;
            } while (uVar8 < local_46);
          }
          *(undefined2 *)((long)puVar5 + 0x4c) = local_4c;
          *(undefined4 *)((long)puVar5 + 0x4e) = local_4a;
          *(uint *)(puVar5 + 9) = local_50;
          *(byte *)((long)puVar5 + 0x53) = *(byte *)((long)puVar5 + 0x53) & 0xfd;
          puVar5[6] = lVar4;
          puVar5[7] = local_68;
          lVar4 = FUN_03fac640();
          bVar6 = *(byte *)((long)puVar5 + 0x53);
          puVar5[8] = lVar4;
          if (lVar4 != 0) {
            bVar6 = bVar6 | 1;
            *(byte *)((long)puVar5 + 0x53) = bVar6;
          }
          *(byte *)((long)puVar5 + 0x53) = bVar6 & 0xe7 | local_44 << 4;
          if (puVar5[1] == 0) {
            uVar3 = FUN_03fbd410();
            puVar5[2] = uVar3;
            FUN_03fc07b4(&local_80,puVar5);
            puVar5[1] = uStack_78;
            *puVar5 = local_80;
          }
          else {
            uVar3 = FUN_03fc077c(*param_1,local_50);
            puVar5[2] = uVar3;
          }
          *(undefined8 **)(param_1[0x13] + uVar7 * 8) = puVar5;
          uVar7 = uVar7 + 1;
          puVar5 = puVar5 + 0xb;
        } while (uVar7 != uVar2);
      }
    }
  }
  return;
}

