// rea decompile_all
// name: FUN_0403413c
// address: 0x403413c
// body: available
// range: 0x403413c-0x40344af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4034334 to 0x4039168 FUN_04039168 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40344a0 to 0x40324c0 FUN_040324c0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40344a4 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40344a8 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40344ac to 0x89db8a0 std::terminate (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_0403413c(long *param_1)

{
  long *__src;
  char cVar1;
  undefined8 *puVar2;
  long lVar3;
  long *__ptr;
  void *pvVar4;
  char *pcVar5;
  long lVar6;
  uint __c;
  byte *pbVar7;
  long lVar8;
  undefined *puVar9;
  undefined1 uVar10;
  byte *pbVar11;
  int iVar12;
  size_t __n;
  long *plVar13;
  undefined1 auVar14 [16];
  
  pbVar7 = (byte *)*param_1;
  pbVar11 = (byte *)param_1[1];
  if (pbVar11 == pbVar7) {
    iVar12 = 0x7fffffdb;
  }
  else {
    iVar12 = (int)(CONCAT14(*pbVar7,*pbVar7 - 0x4a) >> 1);
    if (iVar12 < 5) {
      if (iVar12 == 0) {
        lVar8 = param_1[2];
        lVar6 = param_1[3];
        pbVar7 = pbVar7 + 1;
        __src = param_1 + 5;
        *param_1 = (long)pbVar7;
        while ((pbVar7 == pbVar11 || (*pbVar7 != 0x45))) {
          lVar3 = FUN_0403413c(param_1);
          if (lVar3 == 0) {
            return (undefined8 *)0x0;
          }
          plVar13 = (long *)param_1[3];
          if (plVar13 == (long *)param_1[4]) {
            __ptr = (long *)param_1[2];
            __n = (long)plVar13 - (long)__ptr;
            if (__ptr == __src) {
              pvVar4 = malloc(__n * 2);
              if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if (plVar13 != __src) {
                memcpy(pvVar4,__src,__n);
              }
              param_1[2] = (long)pvVar4;
            }
            else {
              pvVar4 = realloc(__ptr,__n * 2);
              param_1[2] = (long)pvVar4;
              if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
            }
            plVar13 = (long *)((long)pvVar4 + __n);
            param_1[4] = (long)((long)pvVar4 + ((long)__n >> 2) * 8);
          }
          param_1[3] = (long)(plVar13 + 1);
          *plVar13 = lVar3;
          pbVar11 = (byte *)param_1[1];
          pbVar7 = (byte *)*param_1;
        }
        *param_1 = (long)(pbVar7 + 1);
        auVar14 = FUN_04034628(param_1,lVar6 - lVar8 >> 3);
        pvVar4 = (void *)param_1[0x266];
        lVar8 = *(long *)((long)pvVar4 + 8);
        puVar2 = pvVar4;
        if (lVar8 - 0xfd0U < 0xfffffffffffff010) {
          puVar2 = malloc(0x1000);
          if (puVar2 == (void *)0x0) goto LAB_040344ac;
          lVar8 = 0;
          *puVar2 = pvVar4;
          puVar2[1] = 0;
          param_1[0x266] = (long)puVar2;
        }
        lVar6 = (long)puVar2 + lVar8;
        puVar9 = &UNK_08fb01f8;
        *(long *)((long)puVar2 + 8) = lVar8 + 0x20;
        uVar10 = 0x29;
        goto LAB_040343b8;
      }
      if (iVar12 != 1) goto LAB_04034488;
      if (((ulong)((long)pbVar11 - (long)pbVar7) < 2) || (pbVar7[1] != 0x5a)) {
        puVar2 = (undefined8 *)FUN_04039168(param_1);
        return puVar2;
      }
      *param_1 = (long)(pbVar7 + 2);
      puVar2 = (undefined8 *)FUN_040318a8(param_1);
      if (puVar2 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      pcVar5 = (char *)*param_1;
      if (pcVar5 == (char *)param_1[1]) {
        return (undefined8 *)0x0;
      }
      cVar1 = *pcVar5;
      goto joined_r0x04034214;
    }
  }
  if (iVar12 == 5) {
    if ((pbVar11 != pbVar7) && (*pbVar7 == 0x54)) {
      if ((ulong)((long)pbVar11 - (long)pbVar7) < 2) {
        __c = 0;
      }
      else {
        __c = (uint)pbVar7[1];
      }
      pcVar5 = memchr(&UNK_01a3f4bd,__c,5);
      if ((pcVar5 != (char *)0x0) && (pcVar5 != "")) {
        lVar8 = FUN_0403ee0c(param_1,0);
        if (lVar8 == 0) {
          return (undefined8 *)0x0;
        }
        lVar6 = FUN_0403413c(param_1);
        auVar14._8_8_ = lVar6;
        auVar14._0_8_ = lVar8;
        if (lVar6 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar4 = (void *)param_1[0x266];
        lVar8 = *(long *)((long)pvVar4 + 8);
        puVar2 = pvVar4;
        if (lVar8 - 0xfd0U < 0xfffffffffffff010) {
          puVar2 = malloc(0x1000);
          if (puVar2 == (void *)0x0) {
LAB_040344ac:
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar8 = 0;
          *puVar2 = pvVar4;
          puVar2[1] = 0;
          param_1[0x266] = (long)puVar2;
        }
        lVar6 = (long)puVar2 + lVar8;
        puVar9 = &UNK_08fb0268;
        *(long *)((long)puVar2 + 8) = lVar8 + 0x20;
        uVar10 = 0x22;
LAB_040343b8:
        *(undefined8 *)(lVar6 + 0x10) = puVar9;
        *(undefined1 *)(lVar6 + 0x18) = uVar10;
        *(undefined1 (*) [16])(lVar6 + 0x20) = auVar14;
        *(ushort *)(lVar6 + 0x19) = *(ushort *)(lVar6 + 0x19) & 0xf000 | 0x540;
        return (undefined8 *)(lVar6 + 0x10);
      }
    }
  }
  else if (iVar12 == 7) {
    *param_1 = (long)(pbVar7 + 1);
    puVar2 = (undefined8 *)FUN_0403770c(param_1);
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    pcVar5 = (char *)*param_1;
    if (pcVar5 == (char *)param_1[1]) {
      return (undefined8 *)0x0;
    }
    cVar1 = *pcVar5;
joined_r0x04034214:
    if (cVar1 == 'E') {
      *param_1 = (long)(pcVar5 + 1);
      return puVar2;
    }
    return (undefined8 *)0x0;
  }
LAB_04034488:
  puVar2 = (undefined8 *)FUN_040324c0(param_1);
  return puVar2;
}

