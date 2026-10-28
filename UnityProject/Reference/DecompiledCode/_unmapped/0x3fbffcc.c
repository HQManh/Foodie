// rea decompile_all
// name: FUN_03fbffcc
// address: 0x3fbffcc
// body: available
// range: 0x3fbffcc-0x3fc03cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_03fbffcc(undefined8 *param_1,undefined8 param_2)

{
  ushort *puVar1;
  void *pvVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ushort uVar9;
  ulong uVar10;
  char *__s1;
  long *plVar11;
  ulong local_78 [2];
  void *local_68;
  
  puVar1 = (ushort *)((long)param_1 + 0x135);
  uVar9 = *puVar1;
  if ((uVar9 & 0x42) != 0) {
    return 1;
  }
  if (param_1[0x1b] != 0) {
    return 0;
  }
  if (param_1[0xc] == 0) {
    *puVar1 = uVar9 | 0x40;
    *(char *)((long)param_1 + 0x131) = *(char *)((long)param_1 + 0x131) + '\x01';
  }
  else {
    if ((*(byte *)(param_1 + 0x23) >> 4 & 1) != 0) {
      local_78[0] = 0;
      local_78[1] = 0;
      local_68 = (void *)0x0;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"Could not load type \'");
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,(char *)param_1[3]);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,":");
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,(char *)param_1[2]);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"\' because generic types cannot have explicit layout.");
      pvVar2 = (void *)((ulong)local_78 | 1);
      if ((local_78[0] & 1) != 0) {
        pvVar2 = local_68;
      }
      uVar8 = FUN_03fa6e58(pvVar2);
      uVar8 = FUN_03f5dc08(uVar8,0);
      param_1[0x1b] = uVar8;
      DataMemoryBarrier(2,3);
      *puVar1 = *puVar1 & 0xffbe | 2 | (ushort)(param_1[0x1b] == 0);
      if ((local_78[0] & 1) == 0) {
        return 0;
      }
      operator_delete(local_68);
      return 0;
    }
    *puVar1 = uVar9 | 0x40;
    *(char *)((long)param_1 + 0x131) = *(char *)((long)param_1 + 0x131) + '\x01';
    lVar5 = FUN_03fb4784();
    FUN_03fbffcc(lVar5,param_2);
    *puVar1 = *puVar1 & 0xf7ff | *(ushort *)(lVar5 + 0x135) & 0x800;
  }
  if (((*(char *)((long)param_1 + 0x2a) == '\x1d') || (*(char *)((long)param_1 + 0x2a) == '\x14'))
     && ((*(ushort *)(param_1[8] + 0x135) >> 1 & 1) == 0)) {
    FUN_03fbffcc(param_1[8],param_2);
  }
  FUN_03fc0bfc(param_1,param_2);
  lVar5 = param_1[0xb];
  if ((lVar5 != 0) && ((*(ushort *)(lVar5 + 0x135) >> 1 & 1) == 0)) {
    FUN_03fbffcc(lVar5,param_2);
  }
  FUN_03fbfd7c(param_1,param_2);
  FUN_03fc0b68(param_1);
  FUN_03fc03e8(param_1,param_2);
  uVar9 = *puVar1;
  if ((uVar9 >> 8 & 1) == 0) {
    FUN_03fbf930(param_1,param_2);
    uVar9 = *puVar1;
  }
  if (((uVar9 >> 0xb & 1) == 0) && (param_1[0xc] != 0)) {
    if (*(short *)((long)param_1 + 0x124) != 0) {
      uVar10 = 0;
      lVar5 = 8;
      do {
        uVar6 = FUN_03fbb4d0(param_1[0x10] + lVar5 + -8);
        if (((uVar6 & 1) != 0) &&
           (lVar7 = FUN_03fbe574(*(undefined8 *)(param_1[0x10] + lVar5),1),
           (*(ushort *)(lVar7 + 0x135) >> 0xb & 1) == 0)) goto LAB_03fc01a4;
        uVar10 = uVar10 + 1;
        lVar5 = lVar5 + 0x20;
      } while (uVar10 < *(ushort *)((long)param_1 + 0x124));
      uVar9 = *puVar1;
    }
    *puVar1 = uVar9 | 0x800;
  }
LAB_03fc01a4:
  if (param_1[0x1b] != 0) {
    *puVar1 = *puVar1 & 0xffbf;
    return 0;
  }
  FUN_03fc09c0(param_1,param_2);
  FUN_03fc0a9c(param_1,param_2);
  FUN_03fc094c(param_1);
  if ((DAT_095353e8 == param_1) && (uVar9 = *(ushort *)((long)param_1 + 0x12a), (ulong)uVar9 != 0))
  {
    uVar10 = 0;
    plVar11 = param_1 + 0x28;
    do {
      __s1 = *(char **)(*plVar11 + 0x18);
      iVar4 = strcmp(__s1,"GetHashCode");
      if ((iVar4 != 0) && (iVar4 = strcmp(__s1,"Finalize"), iVar4 == 0)) {
        DAT_09515608 = (undefined4)uVar10;
      }
      uVar10 = uVar10 + 1;
      plVar11 = plVar11 + 2;
    } while (uVar9 != uVar10);
  }
  if ((*puVar1 >> 4 & 1) == 0) {
    uVar10 = FUN_03f77734(param_1);
    if ((uVar10 & 1) == 0) {
      FUN_03fc0d18(param_1,param_2);
      if ((param_1[0xc] != 0) &&
         ((bVar3 = *(byte *)((long)param_1 + 0x131), iVar4 = FUN_03f77470(),
          (int)(uint)bVar3 < iVar4 || (DAT_095356c8 != 0)))) {
        uVar8 = FUN_03f77504(*param_1,*(undefined4 *)((long)param_1 + 0x11c),param_1[0xc] + 8,
                             param_2);
        param_1[0x18] = uVar8;
      }
      goto LAB_03fc0388;
    }
    if ((*puVar1 >> 4 & 1) == 0) goto LAB_03fc0388;
  }
  if (param_1[0xc] == 0) {
    FUN_03fc0e84(param_1);
  }
LAB_03fc0388:
  DataMemoryBarrier(2,3);
  *puVar1 = *puVar1 & 0xffbe | 2 | (ushort)(param_1[0x1b] == 0);
  FUN_0404c020(1,&DAT_09534430);
  return 1;
}

