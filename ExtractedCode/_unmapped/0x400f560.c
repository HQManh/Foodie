// rea decompile_all
// name: std::__ndk1::__money_get<char>::__gather_info
// address: 0x400f560
// body: available
// range: 0x400f560-0x400f787 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__money_get<char>::__gather_info(bool, std::__ndk1::locale const&,
   std::__ndk1::money_base::pattern&, char&, char&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, int&) */

void std::__ndk1::__money_get<char>::__gather_info
               (bool param_1,locale *param_2,pattern *param_3,char *param_4,char *param_5,
               basic_string *param_6,basic_string *param_7,basic_string *param_8,
               basic_string *param_9,int *param_10)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  pattern *ppVar9;
  code *pcVar10;
  pattern *ppVar11;
  char *pcVar12;
  pattern *ppVar13;
  ulong uVar14;
  pattern *ppVar15;
  pattern *ppVar16;
  pattern *ppVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte bVar20;
  long lVar21;
  long *plVar22;
  undefined1 *puVar23;
  undefined1 auVar24 [16];
  undefined1 **local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined1 ***local_48;
  
  lVar21 = *(long *)param_2;
  ppVar11 = param_3;
  pcVar12 = param_4;
  if (param_1) {
    puVar23 = moneypunct<char,true>::id;
    local_68 = moneypunct<char,true>::id;
    if (moneypunct<char,true>::id._0_8_ == -1) goto LAB_0400f61c;
    puVar7 = moneypunct<char,true>::id;
  }
  else {
    puVar23 = moneypunct<char,false>::id;
    local_68 = moneypunct<char,false>::id;
    if (moneypunct<char,false>::id._0_8_ == -1) goto LAB_0400f61c;
    puVar7 = moneypunct<char,false>::id;
  }
  local_48 = &local_80;
  local_80 = &local_68;
  pcVar10 = FUN_0402d4a0;
  __call_once((ulong *)puVar7,&local_48,FUN_0402d4a0);
  ppVar11 = (pattern *)pcVar10;
LAB_0400f61c:
  lVar2 = *(long *)(lVar21 + 0x10);
  if (((long)*(int *)(puVar23 + 8) - 1U < (ulong)(*(long *)(lVar21 + 0x18) - lVar2 >> 3)) &&
     (plVar22 = *(long **)(lVar2 + ((long)*(int *)(puVar23 + 8) - 1U) * 8), plVar22 != (long *)0x0))
  {
    uVar5 = (**(code **)(*plVar22 + 0x58))(plVar22);
    *(undefined4 *)param_3 = uVar5;
    (**(code **)(*plVar22 + 0x40))(&local_80,plVar22);
    if (((byte)*param_9 & 1) != 0) {
      operator_delete(*(void **)(param_9 + 0x10));
    }
    *(undefined8 *)(param_9 + 8) = uStack_78;
    *(undefined1 ***)param_9 = local_80;
    *(undefined8 *)(param_9 + 0x10) = local_70;
    (**(code **)(*plVar22 + 0x38))(&local_80,plVar22);
    if (((byte)*param_8 & 1) != 0) {
      operator_delete(*(void **)(param_8 + 0x10));
    }
    *(undefined8 *)(param_8 + 8) = uStack_78;
    *(undefined1 ***)param_8 = local_80;
    *(undefined8 *)(param_8 + 0x10) = local_70;
    cVar4 = (**(code **)(*plVar22 + 0x18))(plVar22);
    *param_4 = cVar4;
    cVar4 = (**(code **)(*plVar22 + 0x20))(plVar22);
    *param_5 = cVar4;
    (**(code **)(*plVar22 + 0x28))(&local_80,plVar22);
    if (((byte)*param_6 & 1) != 0) {
      operator_delete(*(void **)(param_6 + 0x10));
    }
    *(undefined8 *)(param_6 + 8) = uStack_78;
    *(undefined1 ***)param_6 = local_80;
    *(undefined8 *)(param_6 + 0x10) = local_70;
    (**(code **)(*plVar22 + 0x30))(&local_80,plVar22);
    if (((byte)*param_7 & 1) != 0) {
      operator_delete(*(void **)(param_7 + 0x10));
    }
    *(undefined8 *)(param_7 + 8) = uStack_78;
    *(undefined1 ***)param_7 = local_80;
    *(undefined8 *)(param_7 + 0x10) = local_70;
    iVar6 = (**(code **)(*plVar22 + 0x48))(plVar22);
    *param_10 = iVar6;
    return;
  }
  auVar24 = FUN_03ff9c28();
  ppVar9 = auVar24._8_8_;
  pbVar8 = auVar24._0_8_;
  bVar3 = *pbVar8;
  uVar14 = (ulong)bVar3;
  bVar20 = bVar3 & 1;
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(pbVar8 + 8);
  }
  if ((4 < (long)ppVar11 - (long)ppVar9) && (uVar1 != 0)) {
    ppVar13 = ppVar11 + -4;
    if ((ppVar9 != ppVar11) && (ppVar16 = ppVar13, ppVar11 = ppVar9, ppVar9 < ppVar13)) {
      do {
        ppVar15 = ppVar11 + 4;
        iVar6 = *(int *)ppVar11;
        *(int *)ppVar11 = *(int *)ppVar16;
        ppVar17 = ppVar16 + -4;
        *(int *)ppVar16 = iVar6;
        ppVar16 = ppVar17;
        ppVar11 = ppVar15;
      } while (ppVar15 < ppVar17);
      uVar14 = (ulong)*pbVar8;
      bVar20 = *pbVar8 & 1;
    }
    pbVar18 = *(byte **)(pbVar8 + 0x10);
    if (bVar20 == 0) {
      pbVar18 = pbVar8 + 1;
    }
    pbVar19 = pbVar18;
    if (ppVar9 < ppVar13) {
      uVar1 = uVar14 >> 1;
      if (bVar20 != 0) {
        uVar1 = *(ulong *)(pbVar8 + 8);
      }
      do {
        bVar20 = *pbVar19;
        if (((bVar20 != 0) && (bVar20 != 0xff)) && (*(uint *)ppVar9 != (uint)bVar20))
        goto LAB_0400f874;
        ppVar9 = ppVar9 + 4;
        if (1 < (long)(pbVar18 + (uVar1 - (long)pbVar19))) {
          pbVar19 = pbVar19 + 1;
        }
      } while (ppVar9 < ppVar13);
    }
    bVar20 = *pbVar19;
    if (((bVar20 != 0) && (bVar20 != 0xff)) && ((uint)bVar20 <= *(int *)ppVar13 - 1U)) {
LAB_0400f874:
      pcVar12[0] = '\x04';
      pcVar12[1] = '\0';
      pcVar12[2] = '\0';
      pcVar12[3] = '\0';
    }
  }
  return;
}

