// rea decompile_all
// name: FUN_040324c0
// address: 0x40324c0
// body: available
// range: 0x40324c0-0x403251b inclusive
// range: 0x40330d8-0x4033173 inclusive
// range: 0x40332a8-0x40332c7 inclusive
// range: 0x4033840-0x4033843 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4033120 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4033840 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_040324c0(long *param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  ulong uVar6;
  byte *pbVar7;
  ushort uVar8;
  long lVar9;
  byte *pbVar10;
  undefined8 uVar11;
  char *pcVar12;
  ulong uVar13;
  byte *pbVar14;
  uint uVar15;
  size_t sVar16;
  long *__src;
  long *plVar17;
  undefined8 *local_58;
  undefined1 auStack_50 [16];
  ulong uStack_28;
  
  pbVar7 = (byte *)*param_1;
  pbVar1 = (byte *)param_1[1];
  local_58 = (undefined8 *)0x0;
  uVar6 = (long)pbVar1 - (long)pbVar7;
  if (pbVar1 == pbVar7) goto code_r0x040330dc;
  bVar2 = *pbVar7;
  uVar15 = 0;
  switch(bVar2) {
  case 0x41:
    pbVar10 = pbVar7 + 1;
    uStack_28 = 0;
    *param_1 = (long)pbVar10;
    if (pbVar1 == pbVar10) {
code_r0x040333c4:
      uVar6 = FUN_0403770c(param_1);
      puVar4 = (undefined8 *)0x0;
      if (uVar6 == 0) goto joined_r0x04033584;
      pcVar12 = (char *)*param_1;
      if ((pcVar12 == (char *)param_1[1]) || (*pcVar12 != '_')) {
        return (undefined8 *)0x0;
      }
      pbVar7 = (byte *)(pcVar12 + 1);
      uStack_28 = uVar6;
    }
    else if (*pbVar10 - 0x3a < 0xfffffff6) {
      if (*pbVar10 != 0x5f) goto code_r0x040333c4;
      pbVar7 = pbVar7 + 2;
    }
    else {
      auStack_50 = FUN_04032380(param_1,0);
      uStack_28 = FUN_040371e0(param_1,auStack_50);
      pcVar12 = (char *)*param_1;
      if (pcVar12 == (char *)param_1[1]) {
        return (undefined8 *)0x0;
      }
      if (*pcVar12 != '_') {
        return (undefined8 *)0x0;
      }
      pbVar7 = (byte *)(pcVar12 + 1);
    }
    *param_1 = (long)pbVar7;
    pbVar7 = (byte *)FUN_040324c0(param_1);
    puVar4 = (undefined8 *)0x0;
    auStack_50._0_8_ = pbVar7;
    if (pbVar7 != (byte *)0x0) {
      puVar4 = (undefined8 *)func_0x04048748(param_1,auStack_50,&uStack_28);
    }
    goto joined_r0x04033584;
  default:
    goto code_r0x040330dc;
  case 0x43:
    *param_1 = (long)(pbVar7 + 1);
    auStack_50._0_8_ = FUN_040324c0(param_1);
    if ((byte *)auStack_50._0_8_ == (byte *)0x0) {
      return (undefined8 *)0x0;
    }
    puVar4 = (undefined8 *)FUN_04046fa8(param_1,auStack_50);
    goto code_r0x040330e8;
  case 0x44:
    if (uVar6 < 2) {
      return (undefined8 *)0x0;
    }
    bVar2 = pbVar7[1];
    puVar3 = (undefined8 *)0x0;
    switch(bVar2) {
    case 0x42:
    case 0x55:
      pbVar7 = pbVar7 + 2;
      *param_1 = (long)pbVar7;
      if ((pbVar1 == pbVar7) || (*pbVar7 - 0x3a < 0xfffffff6)) {
        auStack_50._0_8_ = FUN_0403770c(param_1);
        if (auStack_50._0_8_ == 0) {
          return (undefined8 *)0x0;
        }
      }
      else {
        auStack_50 = FUN_04032380(param_1,0);
        lVar9 = FUN_040371e0(param_1,auStack_50);
        auStack_50._0_8_ = lVar9;
      }
      pcVar12 = (char *)*param_1;
      if (pcVar12 == (char *)param_1[1]) {
        return (undefined8 *)0x0;
      }
      if (*pcVar12 != '_') {
        return (undefined8 *)0x0;
      }
      *param_1 = (long)(pcVar12 + 1);
      puVar4 = (undefined8 *)func_0x04046840(param_1,auStack_50,bVar2 == 0x42);
      return puVar4;
    default:
      goto code_r0x040332ac;
    case 0x46:
      *param_1 = (long)(pbVar7 + 2);
      auStack_50 = FUN_04032380(param_1,0);
      uVar11 = FUN_040371e0(param_1,auStack_50);
      pcVar12 = (char *)*param_1;
      if ((pcVar12 != (char *)param_1[1]) && (*pcVar12 == '_')) {
        *param_1 = (long)(pcVar12 + 1);
        auStack_50._0_8_ = uVar11;
        puVar4 = (undefined8 *)func_0x040467a0(param_1,auStack_50);
        return puVar4;
      }
      return (undefined8 *)0x0;
    case 0x4b:
    case 0x6b:
      auStack_50._0_8_ = " auto";
      if (bVar2 != 0x6b) {
        auStack_50._0_8_ = " decltype(auto)";
      }
      auStack_50._8_8_ = 5;
      if (bVar2 != 0x6b) {
        auStack_50._8_8_ = 0xf;
      }
      *param_1 = (long)(pbVar7 + 2);
      uStack_28 = FUN_040339f8(param_1,0);
      if (uStack_28 != 0) {
        puVar4 = (undefined8 *)func_0x040468f0(param_1,&uStack_28,auStack_50);
        return puVar4;
      }
      return (undefined8 *)0x0;
    case 0x4f:
    case 0x6f:
    case 0x77:
    case 0x78:
      goto code_r0x04032e50;
    case 0x54:
    case 0x74:
      puVar4 = (undefined8 *)FUN_040367e0(param_1);
      break;
    case 0x61:
      pcVar12 = "auto";
      goto code_r0x04033740;
    case 99:
      pcVar12 = "decltype(auto)";
      goto code_r0x040337b8;
    case 100:
      pcVar12 = "decimal64";
      goto code_r0x0403370c;
    case 0x65:
      *param_1 = (long)(pbVar7 + 2);
      pvVar5 = (void *)param_1[0x266];
      lVar9 = *(long *)((long)pvVar5 + 8);
      puVar4 = pvVar5;
      if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar9 = 0;
        *puVar4 = pvVar5;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
      sVar16 = strlen("decimal128");
      puVar3 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
      *puVar3 = &UNK_08fae288;
      *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 8;
      *(char **)((long)puVar4 + lVar9 + 0x20) = "decimal128";
      *(size_t *)((long)puVar4 + lVar9 + 0x28) = sVar16;
      *(ushort *)((long)puVar4 + lVar9 + 0x19) =
           *(ushort *)((long)puVar4 + lVar9 + 0x19) & 0xf000 | 0x540;
      return puVar3;
    case 0x66:
      pcVar12 = "decimal32";
code_r0x0403370c:
      *param_1 = (long)(pbVar7 + 2);
      pvVar5 = (void *)param_1[0x266];
      lVar9 = *(long *)((long)pvVar5 + 8);
      puVar4 = pvVar5;
      if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar9 = 0;
        *puVar4 = pvVar5;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
      sVar16 = strlen(pcVar12);
      puVar3 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
      *puVar3 = &UNK_08fae288;
      *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 8;
      *(char **)((long)puVar4 + lVar9 + 0x20) = pcVar12;
      *(size_t *)((long)puVar4 + lVar9 + 0x28) = sVar16;
      *(ushort *)((long)puVar4 + lVar9 + 0x19) =
           *(ushort *)((long)puVar4 + lVar9 + 0x19) & 0xf000 | 0x540;
      return puVar3;
    case 0x68:
      pcVar12 = "half";
code_r0x04033740:
      *param_1 = (long)(pbVar7 + 2);
      pvVar5 = (void *)param_1[0x266];
      lVar9 = *(long *)((long)pvVar5 + 8);
      puVar4 = pvVar5;
      if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar9 = 0;
        *puVar4 = pvVar5;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
      sVar16 = strlen(pcVar12);
      puVar3 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
      *puVar3 = &UNK_08fae288;
      *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 8;
      *(char **)((long)puVar4 + lVar9 + 0x20) = pcVar12;
      *(size_t *)((long)puVar4 + lVar9 + 0x28) = sVar16;
      *(ushort *)((long)puVar4 + lVar9 + 0x19) =
           *(ushort *)((long)puVar4 + lVar9 + 0x19) & 0xf000 | 0x540;
      return puVar3;
    case 0x69:
      pcVar12 = "char32_t";
      goto code_r0x04033774;
    case 0x6e:
      pcVar12 = "std::nullptr_t";
code_r0x040337b8:
      *param_1 = (long)(pbVar7 + 2);
      pvVar5 = (void *)param_1[0x266];
      lVar9 = *(long *)((long)pvVar5 + 8);
      puVar4 = pvVar5;
      if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar9 = 0;
        *puVar4 = pvVar5;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
      sVar16 = strlen(pcVar12);
      puVar3 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
      *puVar3 = &UNK_08fae288;
      *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 8;
      *(char **)((long)puVar4 + lVar9 + 0x20) = pcVar12;
      *(size_t *)((long)puVar4 + lVar9 + 0x28) = sVar16;
      *(ushort *)((long)puVar4 + lVar9 + 0x19) =
           *(ushort *)((long)puVar4 + lVar9 + 0x19) & 0xf000 | 0x540;
      return puVar3;
    case 0x70:
      *param_1 = (long)(pbVar7 + 2);
      auStack_50._0_8_ = FUN_040324c0(param_1);
      if ((byte *)auStack_50._0_8_ == (byte *)0x0) {
        return (undefined8 *)0x0;
      }
      puVar4 = (undefined8 *)FUN_0403b1f8(param_1,auStack_50);
      goto code_r0x040330e8;
    case 0x73:
      pcVar12 = "char16_t";
code_r0x04033774:
      *param_1 = (long)(pbVar7 + 2);
      pvVar5 = (void *)param_1[0x266];
      lVar9 = *(long *)((long)pvVar5 + 8);
      puVar4 = pvVar5;
      if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar9 = 0;
        *puVar4 = pvVar5;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
      sVar16 = strlen(pcVar12);
      puVar3 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
      *puVar3 = &UNK_08fae288;
      *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 8;
      *(char **)((long)puVar4 + lVar9 + 0x20) = pcVar12;
      *(size_t *)((long)puVar4 + lVar9 + 0x28) = sVar16;
      *(ushort *)((long)puVar4 + lVar9 + 0x19) =
           *(ushort *)((long)puVar4 + lVar9 + 0x19) & 0xf000 | 0x540;
      return puVar3;
    case 0x75:
      *param_1 = (long)(pbVar7 + 2);
      pvVar5 = (void *)param_1[0x266];
      lVar9 = *(long *)((long)pvVar5 + 8);
      puVar4 = pvVar5;
      if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar9 = 0;
        *puVar4 = pvVar5;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
      sVar16 = strlen("char8_t");
      puVar3 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
      *puVar3 = &UNK_08fae288;
      *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 8;
      *(undefined **)((long)puVar4 + lVar9 + 0x20) = &UNK_01a3f4cd;
      *(size_t *)((long)puVar4 + lVar9 + 0x28) = sVar16;
      *(ushort *)((long)puVar4 + lVar9 + 0x19) =
           *(ushort *)((long)puVar4 + lVar9 + 0x19) & 0xf000 | 0x540;
      return puVar3;
    case 0x76:
      puVar4 = (undefined8 *)func_0x0404699c(param_1);
    }
    goto joined_r0x04033584;
  case 0x46:
    goto code_r0x04032e50;
  case 0x47:
    *param_1 = (long)(pbVar7 + 1);
    auStack_50._0_8_ = FUN_040324c0(param_1);
    if ((byte *)auStack_50._0_8_ == (byte *)0x0) {
      return (undefined8 *)0x0;
    }
    puVar4 = (undefined8 *)func_0x04047058(param_1,auStack_50);
    goto code_r0x040330e8;
  case 0x4b:
  case 0x56:
code_r0x04032b20:
    if (bVar2 == 0x56) {
      uVar15 = uVar15 + 1;
    }
    uVar13 = (ulong)uVar15;
    if (uVar13 < uVar6) {
code_r0x04032b38:
      if (pbVar7[uVar13] == 0x4b) {
        uVar15 = uVar15 + 1;
      }
      uVar13 = (ulong)uVar15;
    }
    goto code_r0x04032b4c;
  case 0x4d:
    *param_1 = (long)(pbVar7 + 1);
    auStack_50._0_8_ = FUN_040324c0(param_1);
    puVar4 = (undefined8 *)0x0;
    if ((byte *)auStack_50._0_8_ != (byte *)0x0) {
      uStack_28 = FUN_040324c0(param_1);
      puVar4 = (undefined8 *)0x0;
      if (uStack_28 != 0) {
        puVar4 = (undefined8 *)func_0x040489c4(param_1,auStack_50,&uStack_28);
      }
    }
    goto joined_r0x04033584;
  case 0x4f:
    *param_1 = (long)(pbVar7 + 1);
    auStack_50._0_8_ = FUN_040324c0(param_1);
    if ((byte *)auStack_50._0_8_ == (byte *)0x0) {
      return (undefined8 *)0x0;
    }
    uStack_28 = CONCAT44(uStack_28._4_4_,1);
    goto code_r0x04033194;
  case 0x50:
    *param_1 = (long)(pbVar7 + 1);
    auStack_50._0_8_ = FUN_040324c0(param_1);
    if ((byte *)auStack_50._0_8_ == (byte *)0x0) {
      return (undefined8 *)0x0;
    }
    puVar4 = (undefined8 *)FUN_04046e40(param_1,auStack_50);
    goto code_r0x040330e8;
  case 0x52:
    *param_1 = (long)(pbVar7 + 1);
    auStack_50._0_8_ = FUN_040324c0(param_1);
    if ((byte *)auStack_50._0_8_ == (byte *)0x0) {
      return (undefined8 *)0x0;
    }
    uStack_28 = uStack_28 & 0xffffffff00000000;
code_r0x04033194:
    puVar4 = (undefined8 *)FUN_04046eec(param_1,auStack_50,&uStack_28);
    goto code_r0x040330e8;
  case 0x53:
    if ((uVar6 < 2) || (pbVar7[1] != 0x74)) {
      uStack_28 = uStack_28 & 0xffffffffffffff00;
      puVar4 = (undefined8 *)FUN_04035c4c(param_1,0,&uStack_28);
      if (puVar4 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      local_58 = puVar4;
      if (((char *)param_1[1] == (char *)*param_1) || (*(char *)*param_1 != 'I')) {
        if ((uStack_28 & 0xff) != 0) {
          return puVar4;
        }
        goto code_r0x040330e8;
      }
      if (((char)uStack_28 != '\0') && ((char)param_1[0x61] == '\0')) {
        return puVar4;
      }
      if ((char)uStack_28 == '\0') {
        FUN_040344b0(param_1 + 0x25,&local_58);
      }
      auStack_50._0_8_ = FUN_04035dcc(param_1,0);
      if ((byte *)auStack_50._0_8_ == (byte *)0x0) {
        return (undefined8 *)0x0;
      }
code_r0x040333b0:
      puVar4 = (undefined8 *)FUN_04036368(param_1,&local_58,auStack_50);
      goto code_r0x040330e8;
    }
    goto code_r0x040330dc;
  case 0x54:
    if (((uVar6 < 2) || (0x10 < pbVar7[1] - 0x65)) ||
       ((1 << (ulong)(pbVar7[1] - 0x65 & 0x1f) & 0x14001U) == 0)) {
      puVar4 = (undefined8 *)FUN_04036410(param_1);
      if (puVar4 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      local_58 = puVar4;
      if ((((char)param_1[0x61] == '\0') || ((char *)param_1[1] == (char *)*param_1)) ||
         (*(char *)*param_1 != 'I')) goto code_r0x040330e8;
      auStack_50._0_8_ = FUN_04035dcc(param_1,0);
      if ((byte *)auStack_50._0_8_ == (byte *)0x0) {
        return (undefined8 *)0x0;
      }
      goto code_r0x040333b0;
    }
code_r0x040330dc:
    puVar4 = (undefined8 *)FUN_04046cac(param_1);
    goto joined_r0x04033584;
  case 0x55:
    goto code_r0x04032ba4;
  case 0x61:
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar7 + 1);
    lVar9 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) {
code_r0x0403383c:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar9 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
    *puVar3 = &UNK_08fae288;
    uVar8 = *(ushort *)((long)puVar4 + lVar9 + 0x19);
    *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 8;
    pcVar12 = "signed char";
    goto code_r0x04032a04;
  case 0x62:
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar7 + 1);
    lVar9 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto code_r0x0403383c;
      lVar9 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
    *puVar3 = &UNK_08fae288;
    uVar8 = *(ushort *)((long)puVar4 + lVar9 + 0x19);
    *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 8;
    pcVar12 = "bool";
    goto code_r0x04033294;
  case 99:
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar7 + 1);
    lVar9 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto code_r0x0403383c;
      lVar9 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
    *puVar3 = &UNK_08fae288;
    uVar8 = *(ushort *)((long)puVar4 + lVar9 + 0x19);
    *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 8;
    pcVar12 = "char";
    goto code_r0x04033294;
  case 100:
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar7 + 1);
    lVar9 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto code_r0x0403383c;
      lVar9 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
    *puVar3 = &UNK_08fae288;
    *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 8;
    pcVar12 = "double";
    *(ushort *)((long)puVar4 + lVar9 + 0x19) =
         *(ushort *)((long)puVar4 + lVar9 + 0x19) & 0xf000 | 0x540;
    uVar11 = 6;
    break;
  case 0x65:
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar7 + 1);
    lVar9 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto code_r0x0403383c;
      lVar9 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
    *puVar3 = &UNK_08fae288;
    uVar8 = *(ushort *)((long)puVar4 + lVar9 + 0x19);
    *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 8;
    pcVar12 = "long double";
code_r0x04032a04:
    *(ushort *)((long)puVar3 + 9) = uVar8 & 0xf000 | 0x540;
    uVar11 = 0xb;
    break;
  case 0x66:
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar7 + 1);
    lVar9 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto code_r0x0403383c;
      lVar9 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
    *puVar3 = &UNK_08fae288;
    uVar8 = *(ushort *)((long)puVar4 + lVar9 + 0x19);
    *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 8;
    pcVar12 = "float";
    goto code_r0x04032fbc;
  case 0x67:
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar7 + 1);
    lVar9 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto code_r0x0403383c;
      lVar9 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
    *puVar3 = &UNK_08fae288;
    *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 8;
    pcVar12 = "__float128";
    *(ushort *)((long)puVar4 + lVar9 + 0x19) =
         *(ushort *)((long)puVar4 + lVar9 + 0x19) & 0xf000 | 0x540;
    uVar11 = 10;
    break;
  case 0x68:
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar7 + 1);
    lVar9 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto code_r0x0403383c;
      lVar9 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
    *puVar3 = &UNK_08fae288;
    uVar8 = *(ushort *)((long)puVar4 + lVar9 + 0x19);
    *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 8;
    pcVar12 = "unsigned char";
    goto code_r0x04032af4;
  case 0x69:
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar7 + 1);
    lVar9 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto code_r0x0403383c;
      lVar9 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
    *puVar3 = &UNK_08fae288;
    uVar8 = *(ushort *)((long)puVar4 + lVar9 + 0x19);
    *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 8;
    pcVar12 = "int";
    goto code_r0x04032ecc;
  case 0x6a:
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar7 + 1);
    lVar9 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto code_r0x0403383c;
      lVar9 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
    *puVar3 = &UNK_08fae288;
    *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 8;
    pcVar12 = "unsigned int";
    *(ushort *)((long)puVar4 + lVar9 + 0x19) =
         *(ushort *)((long)puVar4 + lVar9 + 0x19) & 0xf000 | 0x540;
    uVar11 = 0xc;
    break;
  case 0x6c:
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar7 + 1);
    lVar9 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto code_r0x0403383c;
      lVar9 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
    *puVar3 = &UNK_08fae288;
    uVar8 = *(ushort *)((long)puVar4 + lVar9 + 0x19);
    *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 8;
    pcVar12 = "long";
    goto code_r0x04033294;
  case 0x6d:
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar7 + 1);
    lVar9 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto code_r0x0403383c;
      lVar9 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
    *puVar3 = &UNK_08fae288;
    uVar8 = *(ushort *)((long)puVar4 + lVar9 + 0x19);
    *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 8;
    pcVar12 = "unsigned long";
code_r0x04032af4:
    *(ushort *)((long)puVar3 + 9) = uVar8 & 0xf000 | 0x540;
    uVar11 = 0xd;
    break;
  case 0x6e:
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar7 + 1);
    lVar9 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto code_r0x0403383c;
      lVar9 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
    *puVar3 = &UNK_08fae288;
    *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 8;
    *(ushort *)((long)puVar4 + lVar9 + 0x19) =
         *(ushort *)((long)puVar4 + lVar9 + 0x19) & 0xf000 | 0x540;
    *(char **)((long)puVar4 + lVar9 + 0x20) = "__int128";
    *(undefined8 *)((long)puVar4 + lVar9 + 0x28) = 8;
    return puVar3;
  case 0x6f:
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar7 + 1);
    lVar9 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto code_r0x0403383c;
      lVar9 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
    *puVar3 = &UNK_08fae288;
    *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 8;
    pcVar12 = "unsigned __int128";
    *(ushort *)((long)puVar4 + lVar9 + 0x19) =
         *(ushort *)((long)puVar4 + lVar9 + 0x19) & 0xf000 | 0x540;
    uVar11 = 0x11;
    break;
  case 0x72:
    if (1 < uVar6) {
      bVar2 = pbVar7[1];
      uVar15 = 1;
      goto code_r0x04032b20;
    }
    uVar15 = 1;
    uVar13 = 1;
    if (1 < uVar6) goto code_r0x04032b38;
code_r0x04032b4c:
    if ((uVar13 < uVar6) &&
       ((pbVar7[uVar13] == 0x46 ||
        ((((pbVar7[uVar13] == 0x44 && ((ulong)uVar15 + 1 < uVar6)) &&
          (pbVar7[(ulong)uVar15 + 1] - 0x4f < 0x2a)) &&
         ((1L << ((ulong)(pbVar7[(ulong)uVar15 + 1] - 0x4f) & 0x3f) & 0x30100000001U) != 0)))))) {
code_r0x04032e50:
      puVar4 = (undefined8 *)func_0x04045ab0(param_1);
    }
    else {
code_r0x04032ba4:
      puVar4 = (undefined8 *)func_0x040460a0(param_1);
    }
joined_r0x04033584:
    if (puVar4 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
code_r0x040330e8:
    plVar17 = (long *)param_1[0x26];
    if (plVar17 == (long *)param_1[0x27]) {
      __src = (long *)param_1[0x25];
      sVar16 = (long)plVar17 - (long)__src;
      if (__src == param_1 + 0x28) {
        pvVar5 = malloc(sVar16 * 2);
        if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (plVar17 != __src) {
          memmove(pvVar5,__src,sVar16);
        }
        param_1[0x25] = (long)pvVar5;
      }
      else {
        pvVar5 = realloc(__src,sVar16 * 2);
        param_1[0x25] = (long)pvVar5;
        if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      plVar17 = (long *)((long)pvVar5 + sVar16);
      param_1[0x27] = (long)((long)pvVar5 + ((long)sVar16 >> 2) * 8);
    }
    param_1[0x26] = (long)(plVar17 + 1);
    *plVar17 = (long)puVar4;
    return puVar4;
  case 0x73:
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar7 + 1);
    lVar9 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto code_r0x0403383c;
      lVar9 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
    *puVar3 = &UNK_08fae288;
    uVar8 = *(ushort *)((long)puVar4 + lVar9 + 0x19);
    *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 8;
    pcVar12 = "short";
code_r0x04032fbc:
    *(ushort *)((long)puVar3 + 9) = uVar8 & 0xf000 | 0x540;
    uVar11 = 5;
    break;
  case 0x74:
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar7 + 1);
    lVar9 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto code_r0x0403383c;
      lVar9 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
    *puVar3 = &UNK_08fae288;
    *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 8;
    pcVar12 = "unsigned short";
    *(ushort *)((long)puVar4 + lVar9 + 0x19) =
         *(ushort *)((long)puVar4 + lVar9 + 0x19) & 0xf000 | 0x540;
    uVar11 = 0xe;
    break;
  case 0x75:
    pbVar10 = pbVar7 + 1;
    *param_1 = (long)pbVar10;
    if (pbVar1 == pbVar10) {
      return (undefined8 *)0x0;
    }
    if (*pbVar10 - 0x3a < 0xfffffff6) {
      return (undefined8 *)0x0;
    }
    auStack_50._8_8_ = 0;
    pbVar10 = pbVar7 + 1;
    pbVar7 = pbVar7 + 2;
    do {
      *param_1 = (long)pbVar7;
      auStack_50._8_8_ = ((ulong)pbVar7[-1] + auStack_50._8_8_ * 10) - 0x30;
      auStack_50._0_8_ = pbVar1;
      pbVar14 = pbVar1;
      if (pbVar7 == pbVar1) break;
      bVar2 = *pbVar7;
      auStack_50._0_8_ = pbVar10 + 1;
      pbVar10 = (byte *)auStack_50._0_8_;
      pbVar14 = pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar2 - 0x30 < 10);
    if ((ulong)((long)pbVar1 - auStack_50._0_8_) < (ulong)auStack_50._8_8_) {
      return (undefined8 *)0x0;
    }
    pbVar14 = pbVar14 + auStack_50._8_8_;
    *param_1 = (long)pbVar14;
    if (auStack_50._8_8_ == 0) {
      return (undefined8 *)0x0;
    }
    if ((pbVar14 == pbVar1) || (*pbVar14 != 0x49)) {
      puVar4 = (undefined8 *)FUN_040359d4(param_1,auStack_50);
    }
    else {
      *param_1 = (long)(pbVar14 + 1);
      uStack_28 = FUN_040324c0(param_1);
      if (uStack_28 == 0) {
        return (undefined8 *)0x0;
      }
      pcVar12 = (char *)*param_1;
      if (pcVar12 == (char *)param_1[1]) {
        return (undefined8 *)0x0;
      }
      if (*pcVar12 != 'E') {
        return (undefined8 *)0x0;
      }
      *param_1 = (long)(pcVar12 + 1);
      puVar4 = (undefined8 *)func_0x040466f4(param_1,auStack_50,&uStack_28);
    }
    goto code_r0x040330e8;
  case 0x76:
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar7 + 1);
    lVar9 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto code_r0x0403383c;
      lVar9 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
    *puVar3 = &UNK_08fae288;
    uVar8 = *(ushort *)((long)puVar4 + lVar9 + 0x19);
    *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 8;
    pcVar12 = "void";
code_r0x04033294:
    *(ushort *)((long)puVar3 + 9) = uVar8 & 0xf000 | 0x540;
    uVar11 = 4;
    break;
  case 0x77:
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar7 + 1);
    lVar9 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto code_r0x0403383c;
      lVar9 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
    *puVar3 = &UNK_08fae288;
    *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 8;
    pcVar12 = "wchar_t";
    *(ushort *)((long)puVar4 + lVar9 + 0x19) =
         *(ushort *)((long)puVar4 + lVar9 + 0x19) & 0xf000 | 0x540;
    uVar11 = 7;
    break;
  case 0x78:
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar7 + 1);
    lVar9 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto code_r0x0403383c;
      lVar9 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
    *puVar3 = &UNK_08fae288;
    *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 8;
    pcVar12 = "long long";
    *(ushort *)((long)puVar4 + lVar9 + 0x19) =
         *(ushort *)((long)puVar4 + lVar9 + 0x19) & 0xf000 | 0x540;
    uVar11 = 9;
    break;
  case 0x79:
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar7 + 1);
    lVar9 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto code_r0x0403383c;
      lVar9 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
    *puVar3 = &UNK_08fae288;
    *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 8;
    pcVar12 = "unsigned long long";
    *(ushort *)((long)puVar4 + lVar9 + 0x19) =
         *(ushort *)((long)puVar4 + lVar9 + 0x19) & 0xf000 | 0x540;
    uVar11 = 0x12;
    break;
  case 0x7a:
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar7 + 1);
    lVar9 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto code_r0x0403383c;
      lVar9 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
    *puVar3 = &UNK_08fae288;
    uVar8 = *(ushort *)((long)puVar4 + lVar9 + 0x19);
    *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 8;
    pcVar12 = "...";
code_r0x04032ecc:
    *(ushort *)((long)puVar3 + 9) = uVar8 & 0xf000 | 0x540;
    uVar11 = 3;
  }
  puVar3[2] = pcVar12;
  puVar3[3] = uVar11;
code_r0x040332ac:
  return puVar3;
}

